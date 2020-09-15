#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "liste_dbCH.h"
int main()
{
    dliste* p_liste=NULL;
   // int n=0;
    int v=0;
   // int pos=0;
    p_liste=dliste_new();
    printf("donner la valeur a ajouter  : ");
    scanf("%d",&v);
    p_liste=prepend(v,p_liste);
    //p_liste=append(v,p_liste);
    affichage(p_liste);
    printf("\n");
    p_liste=prepend(9,p_liste);
    p_liste=prepend(10,p_liste);
    p_liste=prepend(11,p_liste);
    affichage(p_liste);
    printf("\n");
    p_liste=inverser(p_liste);
    affichage(p_liste);
   /* retirer_fin_file(p_liste);
    affichage(p_liste);
    getch();
    vider_file(p_liste);
    affichage(p_liste);
    printf("donner la position d'element a ajouter  : ");
    scanf("%d\n",&pos);
    printf("donner sa valeur    : ");
    scanf("%d\n",&v);
    p_liste=insersion(v,p_liste,pos);
    affichage(p_liste);*/
    return 0;
}
dliste *  dliste_new(void){
    dliste *p_new=malloc((sizeof *p_new));
    if(p_new!=NULL)
    {
        p_new->taille=0;
        p_new->p_queue=NULL;
        p_new->p_tete=NULL;
    }
    return p_new;
}

/*dliste * append(int data,dliste *liste)
{
    element *p_new=(element*)malloc((sizeof *p_new));
    if(p_new==NULL)
    {
        return NULL;
    }
    p_new->data=data;
    if(liste->p_queue==NULL)
    {
        liste->p_tete=p_new;
        liste->p_queue=p_new;
        p_new->p_next=NULL;
        p_new->p_prev=NULL;
    }
    else
    {
        p_new->p_prev=liste->p_queue;
        liste->p_queue=p_new;
        p_new->p_next=NULL;
    }
    liste->taille++;
    return liste;
}*/

dliste * prepend(int data,dliste *liste)
{
    element *p_new=malloc((sizeof *p_new));
    p_new->data=data;
    if(liste->p_tete==NULL)
    {
        liste->p_tete=p_new;
        liste->p_queue=p_new;
        p_new->p_next=NULL;
        p_new->p_prev=NULL;
    }
    else
    {
        p_new->p_next=liste->p_tete;
        liste->p_tete->p_prev=p_new;
        p_new->p_prev=NULL;
        liste->p_tete=p_new;
    }
    liste->taille++;
    return liste;
}

/*dliste * insersion(int data,dliste* liste,int pos)
{
    if(liste!=NULL)
    {
        int i=1;
        element *p_new=malloc((sizeof *p_new));
        p_new->data=data;
        element* p_temp=liste->p_tete;
        if
        while(p_temp !=NULL && i<=pos)
        {
            if(pos==i)
            {
                if(p_temp->p_next==NULL)
                    liste=append(data,liste);

            else if(p_temp->p_prev==NULL)
            {
                liste=prepend(data,liste);
            }
            else
            {
                if(p_new!=NULL)
                {
                    p_temp->p_prev->p_next=p_new;
                    p_new->p_prev=p_temp->p_prev;
                    p_new->p_next=p_temp;
                    p_temp->p_prev=p_new;
                    liste->taille++;
                }
            }
            }
            else
            {
                p_temp=p_temp->p_next;
            }
            i++;
        }

    }
    return liste;
}*/

void affichage(dliste* liste)
{
    if(liste->p_tete==NULL)
    {
        printf("la liste est NULL\n");
        return;
    }
    element * p_temp=liste->p_tete;

    while(p_temp!=NULL)
    {
        printf("%d  ",p_temp->data);
        p_temp=p_temp->p_next;
    }
}

dliste * inverser(dliste *l)
{
    dliste *p_temp1=NULL;
    p_temp1=dliste_new();
    element * p_temp=l->p_tete;
    while(p_temp!=NULL)
    {
        p_temp1=prepend(p_temp->data,p_temp1);
        p_temp=p_temp->p_next;
    }
    return p_temp1;
}

void retirer_fin_file(dliste *l)
{

    if(l==NULL)
    {
        printf("la liste est vide\n");
    }
    else
    {
        element *p_tmp=l->p_queue;
        if(l->p_queue->p_prev==NULL)
        {
            l->p_tete=NULL;
            l->p_queue=NULL;
        }
        else
        {
           l->p_queue->p_prev->p_next=NULL;
           l->p_queue=l->p_queue->p_prev;
        }
        free(p_tmp);
        l->taille--;
    }

}

void vider_file(dliste *l)
{
    if(l==NULL)
    {
        printf("la liste est NULL\n");
        return;
    }
    while(l->p_queue!=NULL)
    {
        retirer_fin_file(l);
    }
    free(l);
}
