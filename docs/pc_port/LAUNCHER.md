# Intégration avec le launcher (à lire avant de toucher au choix de langue)

**Décision de l'utilisateur (2026-11-25)** : le choix de la langue (et du jeu
HeartGold / SoulSilver) se fera **dans son launcher**, pas dans le jeu. Il
enverra le code du launcher plus tard. Ne pas ajouter de menu de langue dans le
jeu : exposer seulement des réglages simples que le launcher pilote, et adapter
cette page quand le code du launcher arrive.

## Ce que le jeu offre déjà au launcher

| Quoi | Comment | Remarques |
|---|---|---|
| Jeu | deux exécutables : `pokeheartgold(.exe)`, `pokesoulsilver(.exe)` | build `-DPHG_GAME_VERSION=HEARTGOLD` / `SOULSILVER` |
| Langue | argument `--lang fr\|en` | priorité la plus haute |
| | variable d'environnement `PHG_LANG=fr\|en` | |
| | `config.ini` → `[options] language = auto\|fr\|en` | `auto` = langue de la ROM du joueur |
| Sauvegarde | `--save FICHIER` | défaut : `save.bin` (HG) / `save_ss.bin` (SS) à côté de l'exe |
| Taille de fenêtre | `--scale N` | sinon `[display] window_scale` |
| Données | `--data DOSSIER` (développement) | sinon détection automatique (ci-dessous) |

Codes de sortie : 0 normal ; 1 = données introuvables (une boîte de dialogue a
déjà expliqué au joueur quoi faire).

## Où sont les données (dossier de l'exe)

```
pokeheartgold.exe          pokesoulsilver.exe
config.ini                 (partagé, créé au premier lancement)
<ROM>.nds                  ROM du joueur : HG = code IPK*, SS = code IPG*
pc_data/<langue>/          HG : ROM extraite au 1er lancement (langue de la ROM)
pc_data/en/                HG : couche anglaise construite depuis le dépôt
pc_data_ss/<langue>/       SS : idem
pc_data_ss/en/
mods/, mods/<langue>/      HG ; mods_ss/ pour SS
```

- La couche anglaise ne contient que ce qui dépend de la langue (textes
  `a/0/2/7` + 44 fichiers) ; le reste vient toujours de la ROM extraite, quelle
  que soit sa langue. Elle est produite par `tools/pc_port/build_lang_en.py`
  (cible CMake `phg_lang_en`, lancée automatiquement si `pc_data/fr` existe).
- **À trancher avec le launcher** : `tools/pc_port/package.py` ne met **pas**
  encore `pc_data/en` dans le paquet. Elle vient des sources de la décomp
  (même statut que le dépôt pret public), pas de la ROM. Soit le paquet
  l'inclut (option à ajouter), soit le launcher la fournit.
- Limites de l'anglais : logo du titre, quelques images du Pokégear, listes
  alphabétiques du Pokédex restent dans la langue de la ROM.

## Ce qui ne doit jamais passer par le launcher

La ROM du joueur et les fichiers extraits (`pc_data/<langue de la ROM>`) : le
joueur fournit sa propre ROM. Un launcher qui distribue la ROM distribue le jeu.
