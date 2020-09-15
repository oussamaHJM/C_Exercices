#include<stdio.h>
#include<stdlib.h>
typedef struct noeud
{
	int valeur;
	struct noeud *suivant;
}liste;

liste *tete;
liste *lst;

liste * insertdeb(liste* l,int val)
{
	liste *nv=(liste *)malloc(sizeof(liste));
	nv->valeur=val;
	nv->suivant=l;
	return nv;
}
void affich(liste* l){
	liste *tmp=l;//i=0
	while(tmp!=NULL)//i<n
	{
		printf("%d	",tmp->valeur);
		tmp=tmp->suivant;//i++
	}
	printf("\n");
}

/*liste * inverse(liste* l)
{
    liste *nv=(liste *)malloc(sizeof(liste));
    liste *tmp=l;
    while(tmp!=NULL)
    {
        insertdeb(nv,tmp->valeur);
        tmp=tmp->suivant;
    }
    nv->suivant=NULL;
    l=tmp;
    return nv;
}*/
liste* concat(liste* l,liste* n)
{
    liste* tmp=l;
    while(tmp->suivant!=NULL)//i<n
	{

		tmp=tmp->suivant;//i++
	}
	tmp->suivant=n;
	return l;
}
main()
{
	tete=NULL;
	lst=NULL;
	int n,i,v;
	printf("donner le nombre d'element dans la 1ere liste :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("donner une valeur			:");
		scanf("%d",&v);
		tete = insertdeb(tete,v);
	}
	affich(tete);
	printf("donner le nombre d'element dans l 2eme liste :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("donner une valeur			:");
		scanf("%d",&v);
		lst = insertdeb(lst,v);
	}
    affich(lst);
	tete=concat(tete,lst);
    affich(tete);
}

