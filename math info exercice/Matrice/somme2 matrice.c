#include<stdio.h>
#include<conio.h>
int M[20][20],N[20][20],S[20][20];
int i,j,l,c;
void main()
{
    printf("Donnez le nbre de lignes\n");
    scanf("%d",&l);

    printf("Donnez le nbre de colonnes\n");
    scanf("%d",&c);
    printf("Lecture de la matrice M\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nM[%d][%d]=",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    printf("Lecture de la matrice N\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nN[%d][%d]=",i,j);
            scanf("%d",&N[i][j]);
        }
    }
    printf("\nLa somme des deux matrices\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
            S[i][j]=M[i][j]+N[i][j];
    }
    printf("\nLa somme est\n");
    for(i=0;i<l;i++)
    {
    printf("\n");
        for(j=0;j<c;j++)
            printf("%d  ",S[i][j]);

    }
    getch();
}
