#include<stdio.h>
#include<conio.h>
void recherche(int b[],int m)
{
    int i,val,pos;
    printf("donne la valeur a chercher ");
    scanf("%d",&val);
    for(i=0;i<m;i++)
        if(b[i]==val)
            pos=i;
    printf("le nbr que vouz cherchez se trouve a la position %d",pos);
}
void aff(int b[],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("\n t[%d] : %d",i,b[i]);
}
int maxpair(int b[],int m)
{
    int ma,i,k,pos,aux,j,f[1000],drp;
    drp=0;
    k=0;
    for(i=0;i<m;i++)
        if(b[i]%2==0)
        {
            f[k]=b[i];
            k=k+1;
        }
    ma=f[0];
    for(i=0;i<k;i++)
         if(f[i]>ma)
            ma=f[i];
    return ma;
}
void nbrpremier(int b[],int *m,int f[],int *v)
{
    int i,j,k,pos,h,drp;
    k=0;
    for(i=0;i < *m;i++)
    {
        drp=0;
        for(j=2;j<b[i];j++)
            if((b[i]%j)==0)
                drp=1;
        if(drp==0)
        {
            pos=i;
            f[k]=b[pos];
            k=k+1;
            for(h=pos;h<*m;h++)
                b[h]=b[h+1];
            i=i-1;
            *m=*m-1;
        }
    }
    for(i=0;i<k;i++)
        printf("\n p[%d] : %d",i,f[i]);
    *v=k;
}
void inserer(int b[],int *m,int *r,int f[])
{
    int i,j,pos,drp,h;
    printf("donne la position a la quelle one doit inserer le nbr");
    scanf("%d",&pos);
    *m=*m+1;
    i=*m-1;
    do
    {
        b[i]=b[i-1];
        i=i-1;
    }
    while(i>=(pos+1));
    printf("t[%d] : ",pos);
    scanf("%d",&b[pos]);
    for(i=0;i < *m;i++)
    {
        drp=0;
        for(j=2;j<b[i];j++)
            if((b[i]%j)==0)
                drp=1;
        if(drp==0)
        {
            pos=i;
            f[*r]=b[pos];
            *r=*r+1;
            for(h=pos;h<*m;h++)
                b[h]=b[h+1];
            i=i-1;
            *m=*m-1;
        }
    }
    for(i=0;i<*r;i++)
        printf("\n p[%d] : %d",i,f[i]);
}
int t[10000],p[20000],j,n,c,rep,k;
void main()
{
    printf("donne le nbr de tableau ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("t[%d]",j);
        scanf("%d",&t[j]);
    }
    do
    {
    printf(" \n tape 1 pour recherche une valeur  \n tape 2 pour afficher le tableau \n tape 3 pour extraire les nbr premier \n tape 4 pour inserez un nbr \n tape 5 pour le maximum des nbr pair \n donne votre reponse");
    scanf("%d",&c);
    switch(c)
    {
        case 1:recherche(t,n);break;
        case 2:aff(t,n);break;
        case 3:nbrpremier(t,&n,p,&k);break;
        case 4:inserer(t,&n,&k,p);break;
        case 5:printf("le maximum des nbr pair est %d",maxpair(t,n));break;
        default : printf("1111111111");
    }
    printf("\ntape 1 pour recommencer ");
    scanf("%d",&rep);
    }
    while(rep==1);
    getch();
}
