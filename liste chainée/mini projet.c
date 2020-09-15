#include<stdio.h>
#include<stdlib.h>
struct cartier
{
	int valeur;
	struct cartier *v1;
	struct cartier *v2;
	struct cartier *v3;
};
struct cartier * depart;
/*void insert(int val)
{
	struct element *nv=(struct element*)malloc(sizeof(struct element));
	nv->valeur=val;
	nv->suivant=tete;
	tete=nv;
}*/
void InsertFin(int x)
{  struct cartier *nouveau=(struct cartier*)malloc(sizeof(struct cartier));
   struct cartier *temp=depart;
   nv->valeur=x;
   nv->v1=NULL;
   nv->v2=NULL;
   nv->v2=NULL;
   if(depart==NULL)
    {
        depart=nv;
    }
	else
    {
        while(temp->suivant!=NULL){
            temp=temp->suivant;
            }
        temp->suivant=nv;
    }
}

void affich(){
	struct element *tmp=tete;//i=0
	while(tmp!=NULL)//i<n
	{
		printf("%d	",tmp->valeur);
		tmp=tmp->suivant;//i++

	}
	printf("\n");
}

struct element * debutlst()
{
    struct element * e=tete;
    return e;
	//printf("La liste commence par %d",tete->valeur);
}
struct element * finlst()
{
    struct element * e=tete;
    struct element *tmp=tete;
    while(tmp->suivant!=NULL)//i<n
	{
		tmp=tmp->suivant;//i++

	}
	e=tmp;
	return e;
	//printf("\nla liste termine par %d	",tmp->valeur);
}
void supdebut()
{
    struct element *e=tete;
    tete=tete->suivant;
    free(e);
}
void supfin()
{
    struct element *tmp=tete;
    struct element *tmp2;
    while(tmp->suivant!=NULL)//i<n
	{
	    tmp2=tmp;
		tmp=tmp->suivant;//i++
	}
	tmp2->suivant=NULL;x
	free(tmp);
}
main()
{
	tete=NULL;
	int n,i,v,p,ch;
	printf("donner n\n");
	scanf("%d",&n);
	printf("taper __1__ pour inserer au debut........tapper __2__ pour inserer a la fin  ");
	scanf("%d",&ch);
	if(ch==1)
    {
       for(i=0;i<n;i++)
        {
            printf("donner un valr			:");
            scanf("%d",&v);
            InsertFin(v);

        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("donner un valr			:");
            scanf("%d",&v);
            insert(v);

        }
    }
struct element * e=debutlst();
struct element * a=finlst();
	affich();
	printf("la liste commence par %d\n",e->valeur);
    printf("la liste termine par %d\n",a->valeur);
    supdebut();
    supfin();
	affich();

}
