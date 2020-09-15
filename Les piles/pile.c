/* DATE LE 12/01/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET : LES PILES (ISGA SETTAT)
 */
#include <stdio.h>
#include "pile.h"

/* IMPLEMENTATIONS */
void pile_push(Pile **p_pile, int donnee){
        Pile *p_nouveau = (Pile *)malloc(sizeof *p_nouveau);
        if (p_nouveau != NULL)
        {
                p_nouveau->donnee = donnee;
                p_nouveau->p_prec = *p_pile;
                *p_pile = p_nouveau;
        }
}

void ajout_n_elm(Pile **p_pile,int n){
    int data,i;
    for(i=1;i<=n;i++){
        printf("\t\t* Elements %d : ",i);
        scanf("%d",&data);
        pile_push(p_pile,data);
    }
}

int pile_pop(Pile **p_pile){
    int ret = -1;
    if (p_pile != NULL)
    {
        Pile *temporaire = (*p_pile)->p_prec;
        ret = (*p_pile)->donnee;
        free(*p_pile), *p_pile = NULL;
        *p_pile = temporaire;
    }
    return ret;
}

void pile_clear(Pile **p_pile){
    while (*p_pile != NULL)
    {
        pile_pop(p_pile);
    }
}

int pile_peek(Pile *p_pile){
    int ret = -1; /* Variable de retour. */
    if (p_pile != NULL) /* Si la pile n'est pas vide. */
    {
        ret = p_pile->donnee; /* On stocke dans la variable ret la valeur du dernier élément. */
    }
    return ret;
}

void afficher_pile(Pile *p_pile){
    if(p_pile == NULL){
        printf("|---------------|\n");
        return;
    }
    printf("|---------------|\n|\t%d\t|\n",p_pile->donnee);
    afficher_pile(p_pile->p_prec);
}

int taille_pile(Pile *p_pile,int n){
    if(p_pile == NULL)
        return n;
    return taille_pile(p_pile->p_prec,++n);
}

