#include<stdio.h>
#include<stdlib.h>


int main () {
     typedef struct noeud *arbre;
       struct noeud
       {
       int val;
       struct arbre *gauche;
       struct arbre *droite;
       };

arbre cree_arbre( int val, arbre gauche,arbre droite)
{
    arbre temp_a = malloc(sizeof(arbre));
    temp_a->val=val;
    temp_a->gauche=gauche;
    temp_a->droite=droite;

    return temp_a;

}
arbre=a;
a=cree_arbre(10,NULL,NULL);
printf("%d",*a);
}


