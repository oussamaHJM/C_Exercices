/* DATE LE 13/01/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET : LES PILES (ISGA SETTAT)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pile.h"
/* PROGRAMME PRINCIPALE */
int main(int argc, char* argv[])
{
    printf("\
       ************************************************\n\
       *     DEBUT du programme :  ISGA de Settat     *\n\
       ************************************************\n");

    Pile *p_pile = NULL;
    int n;

    printf("#Ajout de N elements\n\t- Nombre d'element a ajouter : ");
    scanf("%d",&n);
    ajout_n_elm(&p_pile,n);

    printf("\t- Taille de pile est: %d",(int)taille_pile(p_pile,0));

    printf("\n#Affichage de la pile\n\n");
    afficher_pile(p_pile);
    getchar();
    getchar();

    printf("\n#retrait d'un element de la pile\n\t- l'element est: ");
    n=pile_pop(&p_pile);
    if(n==-1) // Liste vide, rien à retirer
        printf("RIEN\n");
    else{
        printf("%d\n",n);
        printf("\t- Affichage de la pile apres le retrait\n");
        afficher_pile(p_pile);
    }
    getchar();

    pile_clear(&p_pile); // libération de la mémoire
    printf("\
           ************************************************\n\
           *     FIN du programme :  ISGA de Settat       *\n\
           ************************************************\n");

    return 0;
}
