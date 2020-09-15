#include<stdio.h>
int t[20][20],m[20][20],p[20][20],s[20][20];
int i,j,k,n;
main()
{
    FILE * fichier;
    fichier=fopen("produit 2 matrice.txt","w");
    printf("donner le nombre des lignes et des colonnes ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("T[%d][%d] ",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                p[i][j]=t[i][k]*m[k][j]+p[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d   ",p[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             fprintf(fichier,"%d   ",p[i][j]);
        }
        fprintf(fichier,"\n");
    }
    fclose(fichier);
}
