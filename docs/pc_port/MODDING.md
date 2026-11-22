# Modder le portage PC / Modding the PC port

Le portage PC garde la structure de fichiers de la cartouche (NitroFS) : le
code ouvre des chemins comme `a/0/1/2` ou `poketool/personal/personal.narc`,
exactement comme sur DS. On peut donc modifier le jeu de deux façons.

## 1. Mods de données (sans recompiler)

Le jeu cherche chaque fichier dans des « couches », de la plus prioritaire à
la moins prioritaire :

1. `mods/<langue>/` (ex. `mods/fr/`)
2. `mods/`
3. `pc_data/<langue>/` (fichiers extraits de votre ROM au premier lancement)
4. `files/` (sources du dépôt, uniquement dans une version de développement)

Un mod ne contient **que les fichiers qu'il change**, au même chemin que dans
la ROM. Exemple : remplacer les scripts du terrain → `mods/a/0/1/2`.

Fichiers utiles (chemins ROM → contenu, d'après `filesystem.mk`) :

| Chemin | Contenu |
|---|---|
| `a/0/0/2` | statistiques de base des Pokémon (`personal.narc`) |
| `a/0/0/3` | courbes d'expérience |
| `a/0/1/2` | scripts du terrain (`scr_seq.narc`) |
| `a/0/2/7` | textes du jeu (`msg.narc`) |
| `a/0/3/3` | attaques apprises par niveau |
| `a/0/3/4` | évolutions |
| `fielddata/…` | cartes, évènements, rencontres |
| `poketool/…` | Pokémon, dresseurs, icônes |

Pour produire ces fichiers à partir des sources éditables du dépôt (JSON,
`.gmm`, `.s` de scripts…), utilisez la chaîne de construction DS du projet
(`make` construit `files/…` puis la ROM) et copiez les NARC obtenus dans
`mods/`. Une ROM modifiée fonctionne aussi : placez-la à côté de l'exécutable
après avoir supprimé `pc_data/` pour la ré-extraire.

Langue : le portage lit les fichiers de la langue de votre ROM. Les sources
du dépôt sont celles de la version américaine : un mod de **texte** doit être
construit pour la bonne langue (les scripts français diffèrent parfois des
scripts américains, par ex. les questions oui/non intégrées aux textes).

## 2. Mods de code (recompiler)

Tout le code du jeu (`src/`, `lib/`) est compilé tel quel pour PC. Modifiez-le
puis recompilez :

```
cmake -S . -B build-clang -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
cmake --build build-clang
```

Règles à respecter (voir `PORTING_ROADMAP.md`) :

- le code spécifique au PC va sous `#ifdef PLATFORM_PC` pour que la ROM DS
  reste identique (« matching ») ;
- les pointeurs font 8 octets sur PC : n'utilisez pas de tailles DS en dur
  (`0x1C`, `index * 4`…), préférez `sizeof` ;
- les données converties depuis l'assembleur sont dans
  `src/platform_pc/generated/asm_data/` (régénérées par
  `tools/pc_port/asm_data_to_c.py`).

Outils de test (variables d'environnement, voir `src/platform_pc/nitro/nitro_pc.c`) :
`PHG_TURBO=1`, `PHG_MUTE=1`, `PHG_TEST_KEYS`, `PHG_TEST_TOUCH`, `PHG_TEST_WARP`,
`PHG_TEST_PARTY_LEVEL`, `PHG_TEST_GIVE_ITEMS`, `PHG_TEST_MAP`, `PHG_DUMP_FRAMES`…

---

## English summary

Files are looked up in `mods/<lang>/`, `mods/`, `pc_data/<lang>/` (extracted
from your ROM), then `files/` (developer builds). A mod only contains the
files it changes, at the same NitroFS path as in the ROM (e.g. `mods/a/0/1/2`
for field scripts). Build those files with the project's regular DS build
(`make`) from the editable sources, or simply use a modified ROM (delete
`pc_data/` so that it is extracted again). Code mods: edit `src/` and rebuild
with CMake; keep PC-only changes under `#ifdef PLATFORM_PC`, and never assume
4-byte pointers.

Never share `pc_data/`, ROMs or anything extracted from them.
