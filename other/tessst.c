#include<stdio.h>
int A[20][20],B[20][20],s[20][20];
int i,j,n;
void lecture(int A[20][20],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
void affichage(int A[20][20],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
}
void somme(int A[20][20],int B[20][20],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
}
main()
{
    printf("donner svp le N");
    scanf("%d",&n);
    lecture(A,n);
    lecture(B,n);
    affichage(A,n);
    affichage(B,n);
    somme(A,B,n);
    affichage(s,n);
}
