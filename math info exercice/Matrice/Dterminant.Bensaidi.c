#include<stdio.h>
#include<conio.h>
int i,j,n;
int M[20][20],t[20][20];
void lecture(int M[20][20],int n)
{

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("M[%d][%d]= ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
}
void affichage(int M[20][20],int n)
{
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
			printf("%d  ",M[i][j]);
			printf("\n");
	}
}
void cpmat(int Ms[20][20],int Mc[20][20],int n,int nl)
{int l,c;
for(l=0;l<nl;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l][c];
 for(l=nl;l<n-1;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l+1][c];

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
{int i,j,n,l,nl,d;
 int M[20][20],A[20][20];
 printf("donner le nombre des lignes et des colonnes \n");
  scanf("%d",&n);
 lecture(M,n);
 affichage(M,n);

 	for(i=0;i<n;i++)
 		{
 		    cpmat(M,A,n,i);
            printf("\npour i=%d\n",i);
            affichage(A,n-1);
        }
        d=det(M,n);
        printf("le derterminant du M = %d\n",d);
		transpo(t,M,n);
		affichage(t,n);

 getch();
}

