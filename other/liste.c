#include<stdio.h>
#include<stdlib.h>
struct noeud
{
	int valeur;
	struct noeud *suivant;
};
struct noeud * tete;
void insert(int val)
{
	struct noeud *nv=(struct noeud*)malloc(sizeof(struct noeud));
	(*nv).valeur=val;
	(*nv).suivant=tete;
	tete=nv;
}
void affich(){
	struct noeud *tmp=tete;//i=0
	while(tmp!=NULL)//i<n
	{
		printf("%d	",(*tmp).valeur);
		tmp=(*tmp).suivant;//i++
	}
	printf("\n");
}

main()
{
	tete=NULL;
	int n,i,v;
	printf("donner n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("donner un valr			");
		scanf("%d",&v);
		if(v!=0)
		{
			insert(v);
		}
		else
		{
			insert(v);
			i=n-1;
		}
		affich();
	}
}
