/*
 * pokemod_patch.h - applique en mémoire les patchs de mods compilés (.mpatch).
 *
 * Fichier commun à tous les ports PC (copié tel quel dans chaque dépôt, sous
 * son dossier propre au PC). Le format est décrit dans
 * plateforme/docs/modding/06-format-mpatch.md.
 *
 * Utilisation :
 *   - au démarrage : pm_patch_load(chemin, "hgss", "fr") ;
 *   - jeux DS : la couche de fichiers appelle pm_patch_touches_file() puis
 *     pm_patch_build_file() quand le jeu ouvre un fichier ;
 *   - jeux Game Boy : pm_patch_apply_rom() sur l'image de la ROM en mémoire ;
 *   - tables du code (boutiques…) : le port les déclare avec
 *     pm_patch_register_table() puis appelle pm_patch_apply_tables().
 *
 * Rien n'est jamais écrit sur le disque : la ROM et les fichiers extraits
 * restent intacts.
 */
#ifndef POKEMOD_PATCH_H
#define POKEMOD_PATCH_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    PM_OP_FILE_BYTES  = 1,  /* octets à une position d'un fichier          */
    PM_OP_NARC_BYTES  = 2,  /* octets à une position d'un membre de NARC    */
    PM_OP_NARC_MEMBER = 3,  /* remplace un membre de NARC (taille libre)    */
    PM_OP_MSG_TEXT    = 4,  /* remplace un texte d'une banque (4e gén.)     */
    PM_OP_ROM_BYTES   = 5,  /* octets à une position de la ROM (Game Boy)   */
    PM_OP_TABLE_BYTES = 6   /* octets dans une table du code déclarée       */
};

/* Charge un .mpatch. game/lang : vérifiés contre l'en-tête (NULL = pas de
 * vérification). Renvoie false si le fichier est absent ou invalide (le jeu
 * continue alors sans patch). */
bool pm_patch_load(const char *path, const char *game, const char *lang);
void pm_patch_unload(void);
int  pm_patch_op_count(void);

/* Jeux DS : ce chemin NitroFS est-il modifié par un patch ? */
bool pm_patch_touches_file(const char *nitro_path);

/* Jeux DS : construit (une fois, puis garde en cache) la version modifiée du
 * fichier à partir de ses octets d'origine. Renvoie NULL en cas d'erreur
 * (le jeu lit alors le fichier d'origine). Ne pas libérer le résultat. */
const uint8_t *pm_patch_build_file(const char *nitro_path, const uint8_t *orig,
                                   uint32_t orig_len, uint32_t *out_len);

/* Jeux Game Boy : applique les opérations ROM_BYTES. Renvoie le nombre
 * d'opérations appliquées (-1 si l'une sort de la ROM). */
int pm_patch_apply_rom(uint8_t *rom, uint32_t rom_len);

/* Tables du code (boutiques…) : le port déclare chaque table modifiable par
 * son nom stable (« boutique.badges »), puis applique. */
void pm_patch_register_table(const char *name, void *ptr, uint32_t size);
int  pm_patch_apply_tables(void);

#ifdef __cplusplus
}
#endif

#endif /* POKEMOD_PATCH_H */
