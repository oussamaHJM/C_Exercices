/* DATE LE 05/01/2017
 * AUTEUR : Khalid EL GHOLAMI
 * OBJET : LES LISTES CHAINEES (ISGA SETTAT)
*/
#ifndef LISTES_CHAINEE_H // pour éviter les inclusion multiples
#define LISTES_CHAINEE_H

typedef struct list
{
    int data;
    struct list *p_next; // p_next pointera vers l'élément suivant (ou NULL s'il s'agit du dernier élément de la liste)
}Liste;

Liste *cons(int valeur, Liste *liste);
void free_list(Liste *liste);
int taille_liste(Liste *liste,int n);
Liste *ajout_n_elm(Liste *liste,int n);
Liste *recherche_elm_n(Liste *liste,int n);
void afficher_liste(Liste *liste);
int retrait_elm_n(Liste *liste,int n);
Liste *supprimer_elm_n(Liste *liste,int n);
Liste *concat(Liste *A, Liste *B);
Liste *inverser(Liste *liste);

#endif
