#include <stdio.h>
#include<string.h>
#include"arbre+file.h"
#define VRAI 1
#define FAUX 0

arbre_t *cree_arbre(int data,arbre_t *g,arbre_t *d)
{
    struct node *p_new = (struct node *)malloc(sizeof *p_new);
    p_new->data=data;
    p_new->p_fils_droit=d;
    p_new->p_fils_gauche=g;
    return p_new;
}

void detruit_arbre(arbre_t *ar)
{
    if(ar==NULL)
    {
        return;
    }
    detruit_arbre(ar->p_fils_droit);
    detruit_arbre(ar->p_fils_gauche);
    free((void*)ar);
}

arbre_t *fils_guauche(arbre_t *ar)
{
    if(ar==NULL)
        return NULL;
    return ar->p_fils_gauche;
}
arbre_t *fils_droit(arbre_t *ar)
{
    if(ar==NULL)
        return NULL;
    return ar->p_fils_droit;
}

int est_une_feuille(arbre_t *ar)
{
    if(ar==NULL)
        return FAUX;
    if(ar->p_fils_droit==NULL && ar->p_fils_gauche==NULL)
        return VRAI;
    return FAUX;
}
int est_une_node_interne(arbre_t *ar)
{
    if(ar==NULL)
        return FAUX;
    if(ar->p_fils_droit!=NULL || ar->p_fils_gauche!=NULL)
        return VRAI;
    return FAUX;
}
void affiche_arbre(arbre_t *ar)
{
    //Sleep(500);
    if(ar==NULL)
        printf("_");
    else
    {
        //system("color 0a");
        printf("{");
        //system("color 0b");
        affiche_arbre(ar->p_fils_gauche);
        //Sleep(500);
        printf(",%d,",ar->data);
        affiche_arbre(ar->p_fils_droit);
        //Sleep(500);
        printf("}");
    }
}
int hauteur(arbre_t *ar)
{
    if(ar==NULL)
        return 0;
    if(est_une_feuille(ar)==VRAI)
        return 0;
    if(hauteur(ar->p_fils_droit)<hauteur(ar->p_fils_gauche))
        return 1+hauteur(ar->p_fils_gauche);
    return 1+hauteur(ar->p_fils_droit);
}
int nombre_de_noeuds(arbre_t *ar)
{
    if(ar==NULL)
        return 0;
    if(est_une_feuille(ar)==VRAI)
        return 1;
    return 1 + nombre_de_noeuds(ar->p_fils_gauche) + nombre_de_noeuds(ar->p_fils_droit);
}

int nombre_feilles(arbre_t *ar)
{
    if(ar==NULL)
        return 0;
    if(est_une_node_interne(ar)==FAUX)
        return 1;
    return nombre_feilles(ar->p_fils_droit)+nombre_feilles(ar->p_fils_gauche);
}

int nombre_noeud_internes(arbre_t *ar)
{
    if(ar==NULL)
        return 0;
    if(est_une_feuille(ar)==VRAI)
        return 0;
    return 1+nombre_noeud_internes(ar->p_fils_droit)+nombre_noeud_internes(ar->p_fils_gauche);
}

/*void inserer(arbre_t *ar,int data)
{
    struct node *p_new = (struct node *)malloc(sizeof *p_new);
    if(ar!=NULL)
        p_new->data=data;
        p_new->p_fils_droit=NULL;
        p_new->p_fils_gauche=NULL;
    if(ar->p_fils_gauche==NULL)

}*/

void infix(arbre_t *ar)
{
    if(ar!=NULL)
    {
        infix(ar->p_fils_gauche);
        printf(" %d ",ar->data);
        infix(ar->p_fils_droit);
    }
}

void prefix(arbre_t *ar)
{
    //Sleep(500);
    if(ar!=NULL)
    {
        printf(" %d ",ar->data);
        prefix(ar->p_fils_gauche);
        prefix(ar->p_fils_droit);
    }
}
void postfixe(arbre_t *ar)
{
    if(ar!=NULL)
    {
        postfixe(ar->p_fils_gauche);
        postfixe(ar->p_fils_droit);
        printf(" %d ",ar->data);
    }
}
void file_enqueue(File **p_file, arbre_t *donnee)
{
    File *p_nouveau = malloc(sizeof *p_nouveau);
    if (p_nouveau != NULL)
    {
        p_nouveau->p_suivant = NULL;
        p_nouveau->donnee = donnee;
        if (*p_file == NULL)
        {
            *p_file = p_nouveau;
        }
        else
        {
            File *p_tmp = *p_file;
            while (p_tmp->p_suivant != NULL)
            {
                p_tmp = p_tmp->p_suivant;
            }
            p_tmp->p_suivant = p_nouveau;
        }
    }
}

arbre_t *file_dequeue(File **p_file){
    arbre_t *ret ;
	if (*p_file != NULL)
	{
		File *p_tmp = (*p_file)->p_suivant;
		ret = (*p_file)->donnee;
		free(*p_file), *p_file = NULL;
		*p_file = p_tmp;
	}
	return ret;
}

void file_clear(File **p_file){
    while (*p_file != NULL)
    {
        file_dequeue(p_file);
    }
}

arbre_t *pile_peek(File *p_file){
    arbre_t *ret; /* Variable de retour. */
    if (p_file != NULL) /* Si la pile n'est pas vide. */
    {
        ret = p_file->donnee; /* On stocke dans la variable ret la valeur du dernier élément. */
    }
    return ret;
}

void afficher_file(File *p_file,int passe){
    if(passe==0) // premier passage
        printf("\nSortie <<");
    if(p_file == NULL){
        printf(" Entree\n");
        return;
    }
    printf(" %d <<",p_file->donnee->data);
    afficher_file(p_file->p_suivant,1);
}

void parcour_largeur(arbre_t *p_ar)
{
    arbre_t* tmp=NULL;
    File *p_file=NULL;
    if(p_ar!=NULL)
    {
        file_enqueue(&p_file,p_ar);
        while(p_file!=NULL)
        {
            tmp=file_dequeue(&p_file);
            printf("--%d--\n",tmp->data);
            if(tmp->p_fils_droit!=NULL)
                file_enqueue(&p_file,tmp->p_fils_droit);
            if(tmp->p_fils_gauche!=NULL)
                file_enqueue(&p_file,tmp->p_fils_gauche);
        }
    }
}


arbre_t *generation_arbre_aliatoir(int n)
{
    arbre_t *t;
    if(n>0)
    {
        arbre_t *g,*d;
        g=generation_arbre_aliatoir(n-1);
        d=generation_arbre_aliatoir(n-1);
        t=cree_arbre(rand()%100,g,d);
    }
    if(n==0)
    {
        t=cree_arbre(rand()%100,NULL,NULL);
    }
    return t;
}

arbre_t *arbre_t_dej_gauch(int n)
{
    arbre_t *t;
    if(n>0)
    {
        arbre_t *g;
        g=arbre_t_dej_gauch(n-1);
        t=cree_arbre(rand()%100,g,NULL);
    }
    if(n==0)
    {
        t=cree_arbre(rand()%100,NULL,NULL);
    }
    return t;
}

arbre_t *arbre_t_dej_droit(int n)
{
    arbre_t *t;
    if(n>0)
    {
        arbre_t *d;
        d=arbre_t_dej_droit(n-1);
        t=cree_arbre(rand()%100,NULL,d);
    }
    if(n==0)
    {
        t=cree_arbre(rand()%100,NULL,NULL);
    }
    return t;
}
/*void affichage_arbre_reel(arbre_t *t,int h)
{

    void prt(arbre_t *p)
    {
    int j;
    int temp,judge;
    int count=0;
    if(t != NULL)
    {
              temp = judge;

        while(1)
        {   temp = temp / 2;
            count++;
            if(temp == 0)
                break;
        }

        for(j=1; j<count; j++)
            putchar('\t');
        printf("%-16d\n",p->data);

        count=0;

        if(p->p_fils_gauch != NULL)judge++;
        prt(p->left);

        if(p->p_fils != NULL)judge++;
        prt(p->right);      }
    }
}*/

arbre_t *insertion_abr(arbre_t *t,int val)
{
    if(t==NULL)
    {
        t=cree_arbre(val,NULL,NULL);
    }
    else
    {
        if(val<t->data)
        {
            t->p_fils_gauche=insertion_abr(t->p_fils_gauche,val);
        }
        else
        {
            t->p_fils_droit=insertion_abr(t->p_fils_droit,val);
        }
    }
    return t;
}

arbre_t *trie_abr(arbre_t *t)
{
        int data=1;
        while(data!=0)
        {
            printf("\ndonner la valeur\n");
            scanf("%d",&data);
            t=insertion_abr(t,data);
        }
        return t;
}
