# Pokémon Or HeartGold — version PC native / native PC port

[![PC port](https://github.com/Pokemon-PC/pokeheartgold-pc/actions/workflows/pc-port.yml/badge.svg)](https://github.com/Pokemon-PC/pokeheartgold-pc/actions/workflows/pc-port.yml)

**Projet de fans, non affilié à Nintendo, Game Freak, The Pokémon Company ni
à [pret](https://pret.github.io/).** C'est un fork du dépôt pokeheartgold de
pret, dont l'outillage d'origine leur appartient. pret n'accepte pas le code
généré par IA et ne veut pas y être associé : n'envoyez rien d'ici à pret et ne
les sollicitez pas à son sujet. Décompilation complète (tout est en C/C++, les
deux ROM se reconstruisent à l'octet près) et port PC réalisés avec des agents IA.

**Argent SoulSilver** a son propre dépôt :
[Pokemon-PC/pokesoulsilver-pc](https://github.com/Pokemon-PC/pokesoulsilver-pc)
(même code ; ce dépôt-ci construit aussi SoulSilver avec
`-DPHG_GAME_VERSION=SOULSILVER`).

(English below)

## Français

Pokémon Or HeartGold qui tourne **nativement sur PC** (Windows, Linux, macOS
Intel), **sans émulateur** : le code du jeu est compilé pour le PC et le
matériel de la DS est reproduit (affichage 2D et 3D, son, sauvegarde, écran
tactile à la souris, horloge).

- **Votre ROM est nécessaire** : posez la ROM de *votre* cartouche (`.nds`) à
  côté de l'exécutable ; ses fichiers sont extraits au premier lancement. Le
  dépôt et le paquet ne contiennent aucune donnée de la cartouche.
- **Langue** : celle de votre ROM, ou l'anglais (textes construits depuis le
  code source du jeu) : `config.ini` → `[options] language = auto | fr | en`.
- **Moddable** : un fichier posé dans `mods/` au même chemin que dans la ROM
  remplace l'original ; tout le code du jeu est en C et se recompile.
- **La ROM DS d'origine reste reconstructible** : le code PC est dans
  `src/platform_pc/` ou sous `#ifdef PLATFORM_PC`.

### Jouer

| DS | Clavier | Manette |
|---|---|---|
| Croix | Flèches | Croix / stick gauche |
| A / B / X / Y | X / Z / S / A | positions Nintendo |
| L / R | Q / W | gâchettes hautes |
| Start / Select | Entrée / Maj droite | Start / Back |
| Écran tactile | souris | — |

Raccourcis : Tab avance rapide, F9 disposition des écrans, F11 plein écran,
F12 capture, M son. Tout se change dans `config.ini`. Guide complet :
[docs/pc_port/README_PC.md](docs/pc_port/README_PC.md).

### Construire

Prérequis : Clang (Windows : `winget install MartinStorsjo.LLVM-MinGW.UCRT`),
CMake, Ninja, Python 3. SDL2 est téléchargé par CMake.

```
python tools/pc_port/nitrofs.py extract <votre-rom.nds> pc_data/fr
cmake -S . -B build-clang -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
cmake --build build-clang
build-clang/pokeheartgold.exe
```

Paquet : `python tools/pc_port/package.py --build build-clang` (exécutable,
notice, dossier `mods/` ; jamais de ROM, de données ni de sauvegarde).

### État

Histoire jouée de bout en bout en accéléré (16 badges, Conseil des 4, Red,
générique), captures, évolutions, œufs, Surf/Vol/vélo, jour et nuit, Pokéathlon,
Zone de Combat complète, Parc Safari, Concours d'insectes, sauvegarde et
rechargement. Testé sous Windows et Linux (WSL) avec la ROM ; CI sur Windows,
Linux et macOS. Sans fil et Wi-Fi : hors ligne (personne n'est trouvé).
Journal détaillé : [PORTING_ROADMAP.md](PORTING_ROADMAP.md).

### Documentation

- [docs/pc_port/README_PC.md](docs/pc_port/README_PC.md) : installation, commandes, options
- [docs/pc_port/MODDING.md](docs/pc_port/MODDING.md) : modifier le jeu
- [docs/pc_port/LAUNCHER.md](docs/pc_port/LAUNCHER.md) : réglages pilotables par un lanceur
- [PORTING_ROADMAP.md](PORTING_ROADMAP.md) : journal du portage
- [INSTALL.md](INSTALL.md) : construire les ROM DS (`pokeheartgold.us.nds`
  `sha1: 4fcded0e2713dc03929845de631d0932ea2b5a37`,
  `pokesoulsilver.us.nds` `sha1: f8dc38ea20c17541a43b58c5e6d18c1732c7e582`)

### Mentions légales

Pokémon est une marque de Nintendo, Creatures Inc. et Game Freak. Ce dépôt ne
contient pas de ROM ; le jeu lit la ROM que *vous* possédez. Ne distribuez pas
de ROM ni les fichiers qui en sont extraits.

## English

Pokémon HeartGold running **natively on PC** (Windows, Linux, macOS Intel),
**without an emulator**: the game code is compiled for the PC and the DS
hardware is reproduced (2D and 3D, sound, save, touch screen with the mouse,
clock).

- **Your ROM is required**: put the ROM of *your* cartridge (`.nds`) next to the
  executable; its files are extracted on first run. No cartridge data is in
  this repository or the package.
- **Language**: your ROM's, or English (text built from the game's source):
  `config.ini` → `[options] language = auto | fr | en`.
- **Moddable**: files in `mods/` replace the ROM's; all game code is C.
- **The original DS ROMs still build** byte-for-byte.

Build: see the commands above. Guide: [docs/pc_port/README_PC.md](docs/pc_port/README_PC.md).
SoulSilver: [Pokemon-PC/pokesoulsilver-pc](https://github.com/Pokemon-PC/pokesoulsilver-pc).

**Fan project, not affiliated with Nintendo, Game Freak, The Pokémon Company or
pret.** This is a fork of pret's pokeheartgold; the original tooling is theirs.
pret doesn't accept AI-generated code and doesn't want to be associated with
this: don't send anything from here upstream or bother them about it. Do not
distribute ROMs or files extracted from them.
