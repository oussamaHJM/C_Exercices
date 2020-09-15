#include<stdio.h>
#include<conio.h>
int t[20][20],m[20][20],p[20][20],s[20][20];
int i,j,n;

main()
{
    FILE * fichier;
    fichier=fopen("mattrice.txt","w");
    printf("donner le nombre des lignes etdes colonnes ");
    scanf("%d",n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("T[%d][%d] ",i,j);
        scanf("%d",&t[i][j]);
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("M[%d][%d] ",i,j);
        scanf("%d",&m[i][j]);
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        p[i][j]=t[i][i]+m[i][i];
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("S[%d][%d] = %d",i,j,s[i][j]);
    }
    fclose(fichier);
getch();
}
