#include<stdio.h>
#include<conio.h>
int l,m,n,i,j,k,s,t[10][10],c[10][10],p[10][10];
main()
{
    printf("donner le nombre de ligne du 1ere matrice");
    scanf("%d",&m);
    printf("donner le nombre de colonne du 1ere matrice");
    scanf("%d",&l);
    printf("donner le nombre de colonne du 2eme matrice");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("T[%d][%d] =",i,j);
            scanf("%d \n",&t[i][j]);
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("T[%d][%d] =",i,j);
            scanf("%d \n",&c[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s=0;
            for(k=0;k<l;k++)
            {
                s=s+(t[i][k])*(c[k][j]);
            }
            p[i][j]=s;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
}
