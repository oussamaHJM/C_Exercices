#include<stdio.h>
#include<conio.h>
void ajout(int b[],int *m)
{
    int i,j,k;
    *m= *m+1;
    i= *m-1;
    printf("t[%d] = ",i);
    scanf("%d",&b[i]);
}
void sup(int b[], int *m)
{
    int i,j,k,drp,pos;
    drp=0;
    printf("donne l'element du tableau a supprimer");
    scanf("%d",&k);
    do
    {
        pos=-1;
        for(i=0;i<*m;i++)
            if(b[i]==k)
            {
                drp=1;
                pos=i;
            }
        if(pos!=-1)
        {
            for(i=pos;i<*m;i++)
                b[i]=b[i+1];
             *m=*m-1;
        }
        if(drp==0)
            printf("le nbre que vous avez donner n'est pas dans le tableau");
    }
    while(pos!=-1);
}
void aff(int b[], int m)
{
    int i;
    for(i=0;i<m;i++)
        printf(" \nt[%d] = %d",i,b[i]);
}
void trie(int *b[],int *m)
{
    int i,j,*aux;
    for(i=0;i<*m-1;i++)
        for(j=i+1;j<*m;j++)
        {
            *aux=*b[i];
            *b[i]=*b[j];
            *b[j]=*aux;
        }
}
int t[10000],i,j,c,n,rep;
void main()
{
    printf("donne le nbr de tableau ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("t[%d] = ",i);
        scanf("%d",&t[i]);
    }
    do
    {
    printf("tape 1 pour l'ajout \ntape 2 pour supprinmer \ntape 3 pour l'affichage \ntape 4 pour le trie \ndonne ton choix ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
            ajout(t,&n);break;
    case 2:
        sup(t,&n);break;
    case 3:
        aff(t,n);break;
    case 4:
        trie(t,&n);break;
    default:
        printf("1111111111");
    }
    printf("tape 1 pour recommencer ");
    scanf("%d",&rep);
    }
    while(rep==1);
    getch();
}

