#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct pile
{
    int donnee;
    struct pile *p_prec;
}Pile;


void pile_push(Pile **p_pile, int donnee);
int pile_pop(Pile **p_pile);
void pile_clear(Pile **p_pile);
int pile_peek(Pile *p_pile);
int taille_pile(Pile *p_pile,int n);
void ajout_n_elm(Pile **p_pile,int n);
void afficher_pile(Pile *p_pile);


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
