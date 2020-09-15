#inclue<stdio.h>
#include<conio.h>
int i,j,n;
int t[20];
void lecture(int t[20][20])
{
    printf("donner le nombre de ligne  est de colonne\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d]",i,j);
            scanf("%d",&t[i][j]);
        }
    }
}
void affiichage(int t[20][20],int n)
{
    for(i=0;i<n,i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",t[i][j]);
        }
        prinf("\n");
    }
}
void copiemat(int t[20][20],int n)
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            mc[i][j]=ms[i+1][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=cs;j<n-1;j++)
        {
            mc[i][j]=ms[i][j+1];
        }
    }
}
main()
{
    lecture(t);
}
