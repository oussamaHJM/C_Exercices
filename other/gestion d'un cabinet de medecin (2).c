#include<stdio.h>
#include<conio.h>
int i,n,c,nv,a;
struct client
{
    int cde;
    char nom[10];
    char prenom[10];
    int ann;
    int nv;
};
struct client t[60];
int compte(struct client t[])
{
    int cmp;
    cmp=0;
    for(i=0;i<n;i++)
    {
        if((2016-t[i].ann)>70)
            cmp=cmp+1;
    }
    printf("\n le nombre des clients age plus que 70 ans est %d ",cmp);
    return cmp;
}
int montant(int nv,int a)
{
    int mtn,mt;
    {if(nv>20)
        mtn=300-(300*0.4);
     else
        {if(nv>10)
            mtn=300-(300*0.15);
        else
            if(nv>6)
                mtn=300-(300*0.1);
            else
                mt=300;}}
    if(a>70)
        mt=mtn-(300*0.1);
    else
        mt=mtn;
    return mt;
}
int moy(int p,int nv,int n)
{
    int a,s,m;
    for(i=0;i<n;i++)
    {
        a=2016-p;
        s=s+montant(t[i].nv,a);
    }
    m=s/60;
    return m;
}
void main()
{
    printf("\ndonner la valeur de n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n t[%d].cde",i);
        scanf("%d",&t[i].cde);
        printf("\n t[%d].prenom",i);
        scanf("%s",&t[i].nom);
        printf("\n t[%d].prenom",i);
        scanf("%s",&t[i].prenom);
        printf("\n t[%d].ann",i);
        scanf("%d",&t[i].ann);
        printf("\n t[%d].nv",i);
        scanf("%d",&t[i].nv);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",t[i].cde);
        printf("\n %s",t[i].nom);
        printf("\n %s",t[i].prenom);
        printf("\n %d",t[i].ann);
        printf("\n %d",t[i].nv);
    }
    printf("\n compter le nombre de patients >70 \n claculer le montant \n afficher la moyenne \n");
    scanf("%d",&c);
    switch(c)
    {
        {
        case 1:
            for(i=0;i<n;i++)
            {printf("le nombre des patients >70 est=%d ",compte(t));}
        }break;
        {
        case 2:
            printf("donner le nombre des visites");
            scanf("%d",&nv);
            printf("donner l'annee de naissaice");
            scanf("%d",&a);
            printf("le montant est=%d",montant(nv,a));
        }break;
        {
        case 3:
            printf("donner le nombre des visites");
            scanf("%d",&nv);
            printf("donner l'annee de naissaice");
            scanf("%d",&a);
            printf("la moyenne est=%d",moy(a,nv,n));
        }break;
    }
}
