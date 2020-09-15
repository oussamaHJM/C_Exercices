/* DATE LE 05/01/2017
 * AUTEUR : Khalid EL GHOLAMI
 * OBJET : LES LISTES CHAINEES (ISGA SETTAT)
*/
#include <stdio.h>
#include <stdlib.h>
#include "ListesChainees.h"

int main (int argc, char* argv){

    printf("\
           ************************************************\n\
           *     DEBUT du programme :  ISGA de Settat     *\n\
           ************************************************\n");

    Liste *liste = NULL;

    printf("#Taille de Liste NULL : %d\n",(int)taille_liste(liste,0));
    getchar();

    printf("#Ajoute de N elements\n\t- Nombre d'element a ajouter : ");
    int n;
    scanf("%d",&n);
    liste = ajout_n_elm(liste,n);

    printf("\n\t- Taille de liste a N elements: %d\n",(int)taille_liste(liste,0));
    getchar();

    printf("# Recherche du N-ieme element. N = ");
    scanf("%d",&n);
    printf("\t- L'element numero %d est %d\n",n,recherche_elm_n(liste,n)->data);
    getchar();

    printf("#Affichage de tous les elements de la liste\n\t- DEBUT >>");
    afficher_liste(liste);
    getchar();

    printf("#Suppression d'un element de la liste\n\t- Numero de l'element N: ");
    scanf("%d",&n);
    liste = supprimer_elm_n(liste,n);
    getchar();
    printf("\t- Affichage de tous les elements de la liste apres la suppression\n\t\t* DEBUT >>");
    afficher_liste(liste);
    getchar();

    printf("#retrait d'un element de la liste\n\t- Numero de l'element N: ");
    scanf("%d",&n);
    n = retrait_elm_n(liste,n);
    getchar();

    printf("\n\t\t* l'element retire de la liste : %d",n);
    printf("\t- Affichage de la liste apres le retrait\n\t\t* DEBUT >>");
    afficher_liste(liste);
    getchar();

    printf("#Concatenation de deux listes A et B\n\t- Donner la liste A: TODO\n");
    int i;
    Liste *A=NULL, *B=NULL;
        A=liste;
    for(i=5;i>0;i--) // creation d'une nouvelle liste de teste
        B=cons(i,B);
    printf("\t- Affichage de tous les elements de la liste concatenee\n\t\t* DEBUT >>");
    afficher_liste(concat(A,B));
    getchar();

    printf("\n#Inversion de la liste\n");
    liste = inverser(liste);
    printf("\t- Affichage de tous les elements de la liste apres le inversion\n\t\t* DEBUT >>");
    afficher_liste(liste);
    getchar();

    free_list(liste); // libération de la mémoire
    printf("\
           ************************************************\n\
           *     FIN du programme :  ISGA de Settat       *\n\
           ************************************************\n");
    return 0;
}


Liste *cons(int valeur, Liste *liste){
    Liste *elem = (Liste*)malloc(sizeof(Liste));
    if (NULL == elem)
          exit(EXIT_FAILURE);
    elem->data = valeur;
    elem->p_next = liste;
    return elem;
}

void free_list(Liste *list){
    while (list != NULL) { /* tant que la liste n'est pas vide */
        Liste *cell = list;
        list = list->p_next;
        free(cell);
    }
}

int taille_liste(Liste *liste,int n){
    if(liste == NULL)
        return n;
    return taille_liste(liste->p_next,++n);
}

Liste *ajout_n_elm(Liste *liste,int n){
    int data,i;
    for(i=1;i<=n;i++){
        printf("\t\t* Elements %d : ",i);
        scanf("%d",&data);
        liste = cons(data,liste);
    }
    return liste;
}

Liste *recherche_elm_n(Liste *liste,int n){
    if(liste==NULL)
        return NULL;
    if(n==1)
        return liste;
    return recherche_elm_n(liste->p_next,--n);
}

void afficher_liste(Liste *liste){
    if(liste == NULL){
        printf(" FIN\n");
        return;
    }
    printf(" %d >>",liste->data);
    afficher_liste(liste->p_next);
}

int retrait_elm_n(Liste *liste,int n){
    if(liste==NULL)
        return 0;

    Liste *elm=NULL;
    int ev=0;
    if(n==1){
        elm = liste;
        liste=liste->p_next;
        ev=elm->data;
        free(elm);
        return ev;
    }

    elm = recherche_elm_n(liste,n-1);  //recherche de l'element N-1
    if(elm!=NULL){
            Liste *tmp = elm->p_next; // element recherche
            if(tmp!=NULL){
                ev=tmp->data;
                elm->p_next=tmp->p_next;      //remplace l'element suivant de N-1 (N) par N+1
                free(tmp);
            }
    }
    return ev;
}

Liste *supprimer_elm_n(Liste *liste,int n){
    if(liste==NULL)
        return liste;

    Liste *elm=NULL;

    if(n==1){
        elm = liste;
        liste=liste->p_next;
        free(elm);
        return liste;
    }

    elm = recherche_elm_n(liste,n-1);  //recherche de l'element N-1
    if(elm!=NULL){
            Liste *tmp = elm->p_next; // element recherche
            if(tmp!=NULL){
                elm->p_next=tmp->p_next;      //remplace l'element suivant de N-1 (N) par N+1
                free(tmp);
            }
    }
    return liste;
}

Liste *concat(Liste *A, Liste *B){
    if(A==NULL)
        return B;

    return cons(A->data,concat(A->p_next,B));

}

Liste *inverser(Liste *liste){
    Liste *inv_liste=NULL;
    while(liste!=NULL){
        inv_liste=cons(liste->data,inv_liste);
        liste=liste->p_next;
    }
    return inv_liste;
}
