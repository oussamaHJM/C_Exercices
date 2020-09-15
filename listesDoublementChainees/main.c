/* DATE   : LE 09/03/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET  : Listes Doublement Chainées  (ISGA SETTAT)
 */
#include <stdio.h>
#include <stdlib.h>
#include "listeDoubleChainee.h"

int main()
{
    Dlist *p_liste = NULL;
    p_liste = dlist_cree();
    int donnee, i=0;
    while(i<5){
        printf("\nDonner un element de FIN de p_liste : ");
        scanf("%d",&donnee);
        dlist_ajout_fin(p_liste,donnee);
        i++;
    }
    printf("\nTaille est : %d\n",p_liste->taille);
    dlist_afficher(p_liste);

    i=0;
    while(i<3){
        printf("\nDonner un element de TETE de p_liste : ");
        scanf("%d",&donnee);
        dlist_ajout_debut(p_liste,donnee);
        i++;
    }
    printf("\nTaille est : %d\n",p_liste->taille);
    dlist_afficher(p_liste);

    printf("\nDonner un element a inserer dans la p_liste : ");
    scanf("%d",&donnee);
    printf("Donner la position : ");
    scanf("%d",&i);
    dlist_inserer(p_liste,donnee,i);

    printf("\nTaille est : %d\n",p_liste->taille);
    dlist_afficher(p_liste);

    printf("\nDonner un element a supprimer de la p_liste (seulement 1 a la fois): ");
    scanf("%d",&donnee);
    dlist_effacer(p_liste,donnee);
    dlist_afficher(p_liste);

    printf("\nDonner un element a supprimer de la p_liste (tous les correspondance): ");
    scanf("%d",&donnee);
    dlist_effacer_tout(p_liste,donnee);
    dlist_afficher(p_liste);

    printf("\nDonner la position de l'element a supprimer de la p_liste: ");
    scanf("%d",&i);
    dlist_effacer_pos(p_liste,i);
    dlist_afficher(p_liste);

    Dlist *dl_rev = dlist_inverser(p_liste);
    printf("\nL'inverse de la p_liste restante est :\n");
    dlist_afficher(dl_rev);

    dlist_liberer(&p_liste);

    return 0;
}
