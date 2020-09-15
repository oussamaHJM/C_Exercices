#include<stdio.h>
#include<conio.h>
int i,j,n,m[20][20];
void lecture(int n,int m[20][20])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] =",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
void affich(int n,int m[20][20])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
void matcpy(int n,int m[20][20])
{
    int ca,mcpy[10][10];
    printf("donner le num de colonne a eliminer");
    scanf("%d",&ca);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            mcpy[i][j]=mcpy[i+1][j];
        }
    }
}
int det(int M[20][20],int n)
  {
	int i; int A[20][20],signe=1;

		int d=0;
		   if(n==1)
		      d=M[0][0];
		   else
	           for(i=0;i<n;i++)
	            {
	               cpmat(M,A,n,i);
	               d=d+signe*M[i][0]*det(A,n-1);
	               signe=-signe;

				}
			return d;
}
void transpo(int t[20][20],int m[20][20],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[j][i]=m[i][j];
        }
    }
}
main()
{
    int t[20][20];
    printf("donner le nombre de ligne qui = lenmbre des colonnes");
    scanf("%d",&n);
    lecture(n,m);
    affich(n,m);
    printf("\n");
    matcpy(n,m);
    affich(n,t);
    transpo(t,m,n);



}
