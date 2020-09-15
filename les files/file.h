/* DATE LE 12/01/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET : LES PILES (ISGA SETTAT)
 */
#include <stdio.h>
#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

/* DEFINITIONS */
typedef struct file
{
    int donnee;             /* La donnée que notre pile stockera. */
    struct pile *p_suivant; /* Pointeur vers l'élément précédent de la pile. */
}File;

/* PROTOTYPES */
void file_enqueue(File **p_file, int donnee);
int file_dequeue(File **p_file);
void file_clear(File **p_file);
int file_peek(File *p_file);
int taille_file(File *p_file,int n);
void ajout_n_elm(File **p_file,int n);
void afficher_file(File *p_file,int passe);

#endif // FILE_H_INCLUDED
