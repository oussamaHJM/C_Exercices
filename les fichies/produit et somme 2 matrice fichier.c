#include<stdio.h>
#include<conio.h>
int t[20][20],m[20][20],p[20][20],s[20][20];
int i,j,k,l,n;
int ss;

main()
{
    FILE * fichier;
    fichier=fopen("somme matrice.txt","w");
    printf("donner le nombre des lignes etdes colonnes ");
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
            s[i][j]=t[i][j]+m[i][j];
        }
    }
    printf("********** somme ************\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fprintf(fichier,"%d  ",s[i][j]);
        }
        fprintf(fichier,"\n");
    }
    printf("*********** produit ********** \n");
    for(i=0;i<n;i++)
    {
        ss=0;
        for(j=0;j<n;j++)
        {
            ss=ss+(t[i][j])*(m[i][j]);
            p[i][j]=ss;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
    fclose(fichier);
getch();
}
