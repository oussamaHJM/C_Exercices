/* DATE LE 12/01/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET : LES PILES (ISGA SETTAT)
 */
#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

/* DEFINITIONS */
typedef struct pile
{
    int donnee;             /* La donnée que notre pile stockera. */
    struct pile *p_prec; /* Pointeur vers l'élément précédent de la pile. */
}Pile;

/* PROTOTYPES */
void pile_push(Pile **p_pile, int donnee);
int pile_pop(Pile **p_pile);
void pile_clear(Pile **p_pile);
int pile_peek(Pile *p_pile);
int taille_pile(Pile *p_pile,int n);
void ajout_n_elm(Pile **p_pile,int n);
void afficher_pile(Pile *p_pile);

#endif // PILE_H_INCLUDED
