#!/usr/bin/env python3
"""Builds the English data layer (pc_data/en, pc_data_ss/en) from the
repository, for the language choice of the PC port.

    python tools/pc_port/build_lang_en.py --template pc_data/fr \\
        --en-msg build-clang/datagen/en_msg --files files --out pc_data/en

The player's ROM (any language) provides the whole game in pc_data/<lang>.
The English layer only holds what differs by language:
  - a/0/2/7 (msgdata/msg.narc): the 829 text banks, encoded from the
    repository's .gmm files (gen_msg.py / msgenc, done by the build), packed
    like the ROM's archive (same file name table, 4-byte alignment);
  - the files that differ between the ROM and the repository (graphics and
    data with text, ~44): the repository has the English version.
Everything else is language-neutral and still comes from the ROM's layer
(src/platform_pc/fs_pc.c puts it under the English one).

Files the repository cannot build (made by Metrowerks in `make filesystem`)
and that hold some text stay in the ROM's language: e.g. the title logo,
some Pokegear pictures, the Pokedex alphabetical lists.
"""
import argparse
import filecmp
import os
import re
import shutil
import struct
import sys

MSG_NARC = os.path.join("a", "0", "2", "7")


def read_narc(path):
    d = open(path, "rb").read()
    if d[:4] != b"NARC":
        sys.exit(f"{path}: not a NARC")
    sections, o = {}, 16
    while o < len(d):
        tag, size = d[o:o + 4], struct.unpack_from("<I", d, o + 4)[0]
        sections[tag] = d[o:o + size]
        o += size
    count = struct.unpack_from("<H", sections[b"BTAF"], 8)[0]
    return count, sections[b"BTNF"]


def write_narc(path, members, btnf):
    gmif_data = bytearray()
    fat = []
    for m in members:
        while len(gmif_data) % 4:
            gmif_data += b"\xff"
        start = len(gmif_data)
        gmif_data += m
        fat.append((start, len(gmif_data)))
    while len(gmif_data) % 4:
        gmif_data += b"\xff"
    btaf = b"BTAF" + struct.pack("<IHH", 12 + 8 * len(fat), len(fat), 0) + \
        b"".join(struct.pack("<II", s, e) for s, e in fat)
    gmif = b"GMIF" + struct.pack("<I", 8 + len(gmif_data)) + bytes(gmif_data)
    body = btaf + btnf + gmif
    header = b"NARC" + struct.pack("<HHIHH", 0xFFFE, 0x0100, 16 + len(body), 16, 3)
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path + ".tmp", "wb") as f:
        f.write(header + body)
    os.replace(path + ".tmp", path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--template", required=True, help="data extracted from the player's ROM")
    ap.add_argument("--en-msg", required=True, help="encoded English text banks (msg_NNNN*.bin)")
    ap.add_argument("--files", required=True, help="the repository's files/ tree")
    ap.add_argument("--out", required=True)
    ap.add_argument("--stamp")
    a = ap.parse_args()

    count, btnf = read_narc(os.path.join(a.template, MSG_NARC))
    banks = {}
    for name in os.listdir(a.en_msg):
        m = re.match(r"^msg_(\d{4})(?:_\w+)?\.bin$", name)
        if m:
            banks[int(m.group(1))] = os.path.join(a.en_msg, name)
    missing = [k for k in range(count) if k not in banks]
    if missing:
        sys.exit(f"English text banks missing: {missing[:10]}...")
    members = [open(banks[k], "rb").read() for k in range(count)]
    write_narc(os.path.join(a.out, MSG_NARC), members, btnf)

    localized = 0
    for root, _, names in os.walk(a.template):
        for n in names:
            src = os.path.join(root, n)
            rel = os.path.relpath(src, a.template)
            if rel == MSG_NARC:
                continue
            repo = os.path.join(a.files, rel)
            if os.path.isfile(repo) and not filecmp.cmp(src, repo, shallow=False):
                dst = os.path.join(a.out, rel)
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                shutil.copyfile(repo, dst)
                localized += 1
    print(f"{a.out}: {count} English text banks, {localized} English files from the repository")
    if a.stamp:
        open(a.stamp, "w").close()


if __name__ == "__main__":
    main()
