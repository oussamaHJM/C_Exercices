/* DATE   : LE 09/03/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET  : Listes Doublement Chainées  (ISGA SETTAT)
 */
#ifndef LISTEDOUBLECHAINEE_H_INCLUDED
#define LISTEDOUBLECHAINEE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct noeud
{
    int donnee;
    struct noeud *p_suivant; // p_suivant pointera vers l'élément suivant (ou NULL s'il s'agit du dernier élément de la liste)
    struct noeud *p_precedent; // p_precedent pointera vers l'élément précédent (ou NULL s'il s'agit du premier élément)
}Noeud;

/* Remarque : Afin de bien visualiser nos pointeurs, nous utiliserons le préfixe p_ pour toutes nos variables pointeurs. */

typedef struct dlist
{
    size_t taille;
    Noeud *p_queue;
    Noeud *p_tete;
} Dlist;

Dlist *dlist_cree(void);

Dlist *dlist_ajout_fin(Dlist *p_liste, int donnee);

Dlist *dlist_ajout_debut(Dlist *p_liste, int donnee);

Dlist *dlist_inserer(Dlist *p_liste, int donnee, int position);

void dlist_liberer(Dlist **p_liste);

void dlist_afficher(Dlist *p_liste);

Dlist *dlist_effacer(Dlist *p_liste, int donnee);

Dlist *dlist_effacer_tout(Dlist *p_liste, int donnee);

Dlist *dlist_effacer_pos(Dlist *p_liste, int position);

size_t dlist_taille(Dlist *p_liste);

Dlist *dlist_inverser(Dlist *p_liste);

#endif // LISTEDOUBLECHAINEE_H_INCLUDED
