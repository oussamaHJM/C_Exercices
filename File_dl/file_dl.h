/* DATE   : LE 09/03/2017
 * AUTEUR : Khalid EL GHOLAMI
 * OBJET  : les Files par Listes Doublement Chainnées  (ISGA SETTAT)
 */
#ifndef FILE_DL_H_INCLUDED
#define FILE_DL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *p_next; // p_next pointera vers l'élément suivant (ou NULL s'il s'agit du dernier élément de la liste)
    struct node *p_prev; // p_prev pointera vers l'élément précédent (ou NULL s'il s'agit du premier élément)
}Node;

typedef struct file_sl
{
    size_t taille;
    struct node *p_queue;
    struct node *p_tete;
} File_dl;

File_dl *file_dl_cree(void);

File_dl *file_dl_ajouter_debut(File_dl *p_file, int data);

int file_dl_retirer_fin(File_dl *p_file);

void file_dl_afficher(File_dl *p_file);


#endif // FILE_DL_H_INCLUDED
