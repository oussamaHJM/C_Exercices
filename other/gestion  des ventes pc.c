#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j,n,ch,cde;
struct pc
{
    int cde;
    int mmr;
    int dd;
    int vts;
    int pu;
    char mrq[10];
};
struct pc t[200];
void main()
{
    printf("donner le nombre des pc");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("T[%d].cde",i);
        scanf("%d",&t[i].cde);
        printf("T[%d].mmr",i);
        scanf("%d",&t[i].mmr);
        printf("T[%d].dd",i);
        scanf("%d",&t[i].dd);
        printf("T[%d].vts",i);
        scanf("%d",&t[i].vts);
        printf("T[%d].pu",i);
        scanf("%d",&t[i].pu);
        printf("T[%d].mrq",i);
        scanf("%s",&t[i].mrq);
    }
    n=n+1;
    for(i=n-2;i<n;i++)
    {
        printf("T[%d].cde(a ajouter)",i);
        scanf("%d",&t[i].cde);
        printf("T[%d].mmr (a ajouter)",i);
        scanf("%d",&t[i].mmr);
        printf("T[%d].dd(a ajouter)",i);
        scanf("%d",&t[i].dd);
        printf("T[%d].vts(a ajouter)",i);
        scanf("%d",&t[i].vts);
        printf("T[%d].pu(a ajouter)",i);
        scanf("%d",&t[i].pu);
        printf("T[%d].mrq(a ajouter)",i);
        scanf("%s",&t[i].mrq);
    }
    for(i=0;i<n,i++)
    {
        printf("%d",t[i].cde);
        printf("%d",t[i].mmr);
        printf("%d",t[i].dd);
        printf("%d",t[i].vts);
        printf("%d",t[i].pu);
        printf("%s",t[i].mrq);
    }
    printf("donner le code du pc a suprimer");
    scanf("%d",&cde);
    for(i=0;i<n,i++)
    {
        if(t[i].cde==)
    }
}

