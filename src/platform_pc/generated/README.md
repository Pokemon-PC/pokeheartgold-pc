# Generated sources (PC port)

Checked in so that building the PC port needs neither libclang nor the
generators. Regenerate after changing the inputs, then rebuild:

| Directory | Generated from | Command |
|---|---|---|
| `asm_data/` | DS data assembly (`asm/*.s`, `lib/asm/*.s`, `lib/NitroDWC/asm/*.s`, `lib/NitroSDK/asm/*.s`) | `python tools/pc_port/asm_data_to_c.py src/platform_pc/generated/asm_data asm/*.s $(ls lib/asm/*.s \| grep -v /msl_) lib/NitroDWC/asm/*.s lib/NitroSDK/asm/*.s` |
| `stubs/` | declarations of library functions the PC build does not provide | `python tools/pc_port/gen_stubs.py src/platform_pc/generated/stubs <symbol list>` |

Both scripts need the `libclang` Python package (`pip install libclang`) and a
configured build (`build-clang/generated` for the generated game headers).
`asm_data/asm_data_report.txt` lists the cases the converter left to a human.

Modding: the tables in `asm_data/*_typed.c` are plain C with field names; for a
lasting change, edit the original `.s` (shared with the DS build) and regenerate.
