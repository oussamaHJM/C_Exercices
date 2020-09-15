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
	nv->valeur=val;
	nv->suivant=tete;
	tete=nv;
}

void insertp(int p,int v)
{
	int i;
	struct noeud *nv=(struct noeud*)malloc(sizeof(struct noeud));
	struct noeud *temp=tete;
	nv->valeur=v;
	nv->suivant=NULL;
	if(p==1)
	{
		nv->suivant=tete;
		tete=nv;
	}
	else
	{
		for(i=0;i<p-2;i++)
		{
			temp=temp->suivant;
		}
		nv->suivant=temp->suivant;
		temp->suivant=nv;
	}
}
void affich(){
	struct noeud *tmp=tete;//i=0
	while(tmp!=NULL)//i<n
	{
		printf("%d	",tmp->valeur);
		tmp=tmp->suivant;//i++
	}
	printf("\n");
}
void InsertFin(int x)
{  struct noeud *nv=(struct noeud*)malloc(sizeof(struct noeud));
   struct noeud *temp=tete;
   nv->valeur=x;
   nv->suivant=NULL;
   if(tete==NULL)
   {
   	tete=nv;
    }
	else
    {
        while(temp->suivant!=NULL){
            temp=temp->suivant;
            }
        temp->suivant=nv;
    }
 }


void sup()
{
	struct noeud *temp=tete;
	temp=tete;
	tete=temp->suivant;
	free(temp);
}


void supp(int p)
{
	int i;
	struct noeud *temp=tete;
	struct noeud *temp2;
	if(p==1)
	{
		tete=temp->suivant;
		free(temp);
	}
	else
	{
		for(i=0;i<p-2;i++)
		{
			temp=temp->suivant;
		}
		temp2=temp->suivant;
		temp->suivant=temp2->suivant;
		free(temp2);
	}
}

void inverse_liste()
{
	struct noeud *nv=(struct noeud*)malloc(sizeof(struct noeud));
	struct noeud *temp=NULL;
	nv->valeur=temp->valeur;
	nv->suivant=NULL;
	tete=NULL;
}

main()
{
	tete=NULL;
	int n,i,v,p;
	printf("donner n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("donner un valr			:");
		scanf("%d",&v);
		InsertFin(v);

	}
	affich();
	/*printf("donner la valeur a inserer:");
	scanf("%d",&v);
	printf("donner sa position:");
	scanf("%d",&p);
	insertp(p,v);
	affich();*/
	/*printf("donner la position de la valeur a suprimer");
	scanf("%d",&p);
	supp(p);*/
	inverse_liste();
	affich();

}
