/* DATE LE 12/01/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET : LES PILES (ISGA SETTAT)
 */
#include <stdio.h>
#include "file.h"

/* IMPLEMENTATIONS */
void file_enqueue(File **p_file, int donnee)
{
    File *p_nouveau = malloc(sizeof *p_nouveau);
    if (p_nouveau != NULL)
    {
        p_nouveau->p_suivant = NULL;
        p_nouveau->donnee = donnee;
        if (*p_file == NULL)
        {
            *p_file = p_nouveau;
        }
        else
        {
            File *p_tmp = *p_file;
            while (p_tmp->p_suivant != NULL)
            {
                p_tmp = p_tmp->p_suivant;
            }
            p_tmp->p_suivant = p_nouveau;
        }
    }
}


void ajout_n_elm(File **p_file,int n){
    int data,i;
    for(i=1;i<=n;i++){
        printf("\t\t* Elements %d : ",i);
        scanf("%d",&data);
        file_enqueue(p_file,data);
    }
}

int file_dequeue(File **p_file){
    int ret = -1;
	if (*p_file != NULL)
	{
		File *p_tmp = (*p_file)->p_suivant;
		ret = (*p_file)->donnee;
		free(*p_file), *p_file = NULL;
		*p_file = p_tmp;
	}
	return ret;
}

void file_clear(File **p_file){
    while (*p_file != NULL)
    {
        file_dequeue(p_file);
    }
}

int pile_peek(File *p_file){
    int ret = -1; /* Variable de retour. */
    if (p_file != NULL) /* Si la pile n'est pas vide. */
    {
        ret = p_file->donnee; /* On stocke dans la variable ret la valeur du dernier élément. */
    }
    return ret;
}

void afficher_file(File *p_file,int passe){
    if(passe==0) // premier passage
        printf("\nSortie <<");
    if(p_file == NULL){
        printf(" Entree\n");
        return;
    }
    printf(" %d <<",p_file->donnee);
    afficher_file(p_file->p_suivant,1);
}

int taille_file(File *p_file,int n){
    if(p_file == NULL)
        return n;
    return taille_file(p_file->p_suivant,++n);
}

