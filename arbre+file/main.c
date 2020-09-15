#include <stdio.h>
#include <stdlib.h>
#include "arbre+file.h"

int main()
{
    int n;
    arbre_t *arbre4,*arbre3,*arbre2,*arbre1,*arbre0,*t1,*t2;
    arbre4=cree_arbre(1,NULL,NULL);
    arbre4=cree_arbre(3,arbre4,NULL);
    arbre3=cree_arbre(7,NULL,NULL);
    arbre3=cree_arbre(9,arbre3,NULL);
    arbre1=cree_arbre(6,NULL,NULL);
    arbre2=cree_arbre(6,arbre1,arbre3);
    arbre0=cree_arbre(4,arbre4,arbre2);
    affiche_arbre(arbre0);
    printf("\n");
    prefix(arbre0);
    printf("\n");
    infix(arbre0);
    printf("\n");
    postfixe(arbre0);
    printf("\n");
    printf("\nla hauteur = %d",hauteur(arbre0));
    printf("\nle nombre de noeuds = %d",nombre_de_noeuds(arbre0));
    printf("\nle nombre des feilles = %d",nombre_feilles(arbre0));
    printf("\nle nombre de noeud interne = %d",nombre_noeud_internes(arbre0));
    parcour_largeur(arbre0);
   // t1=generation_arbre_aliatoir(n);
   // t2=arbre_t_dej_droit(n);
    printf("\n--------------------------\n");
    t1=NULL;
    t1=insertion_abr(t1,9);
    t1=insertion_abr(t1,7);
    t1=insertion_abr(t1,8);
    t1=insertion_abr(t1,2);
    t1=insertion_abr(t1,19);
    t1=insertion_abr(t1,20);
    affiche_arbre(t1);
    //affichage_arbre_reel(t1);
    //printf("\n--------------------------\n");
    //affiche_arbre(t2);
    t2=NULL;
    t2=trie_abr(t2);
    infix(t2);
    return 0;
}
