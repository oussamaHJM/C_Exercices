#include<stdio.h>
#include<conio.h>
int i,n,nbr,ns,drp;
void main()
{
    printf("donner le nombre des cases \n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++)
        {printf("\n T[%d] = %.2d",i,t[i]);}
    printf("\n donner le nombre a ajouter \n");
    scanf("%d",&nbr);
    n=n+1;
    t[n-1]=nbr;
    for(i=0;i<n;i++)
    {printf("\n T[%d] = %.2d",i,t[i]);}
    printf("\n donner le nombre a suprimer \n");
    scanf("%d",&ns);
    for(i=0;i<n;i++)
        {if(ns==t[i])
            {drp=1;
            n=n-1;
            t[i]=t[i-1];}
        else
            drp=0;}
        for(i=0;i<n;i++)
        printf("\n T[%d] = %.2d \n",i,t[i]);
getch();
}
