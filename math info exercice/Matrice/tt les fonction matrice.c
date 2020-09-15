#include<stdio.h>
#include<conio.h>
int i,j,n;
float M[20][20];
void lecture(float M[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("M[%d][%d]= ",i,j);
			scanf("%f",&M[i][j]);
		}
	}
}
void affichage(float M[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		printf("\n ");
		for(j=0;j<n;j++)
			printf("%.0f  ",M[i][j]);
			printf("\n");
	}
}
void cpmat(float Ms[20][20],float Mc[20][20],int n,int nl)
{int l,c;
for(l=0;l<nl;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l][c];
 for(l=nl;l<n-1;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l+1][c];

}
float det(float M[20][20],int n)
{
    int i;
    float A[20][20];
    float signe=1;
    float d=0;
    if(n==1)
        d=M[0][0];
    else
    {
        for(i=0;i<n;i++)
        {
            cpmat(M,A,n,i);
            d=d+signe*M[i][0]*det(A,n-1);
            signe=-signe;
        }
        return d;
    }
}
void transpose(float M[20][20],float T[20][20],int n)
{
    int i,j;
for(i=0;i<n;i++)
     for(j=0;j<n;j++)
            T[i][j]=M[j][i];
}
void comatrice(float M[20][20],float C[20][20],int n)
{
    int i,j;
    float A[20][20];
    transpose(M,A,n);
    if((det(M,n))==0)
        printf("M[][] n'est pas inversible");
    else
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                C[i][j]=(1/det(M,n))*(A[i][j]);
    }

}
main()
{
    int i,j,n,l,nl,d;
    float M[20][20],A[20][20],T[20][20];
    float C[20][20];
 printf("donner le nombre des lignes et des colonnes \n");
  scanf("%d",&n);
 lecture(M,n);
 affichage(M,n);
 for(i=0;i<n;i++)
 		{cpmat(M,A,n,i);
 		 printf("\npour i=%d\n",i);
 		 d=det(M,n);

 		affichage(A,n-1);
		 }
		  printf("le determinant de M est = %d\n",d);
transpose(M,T,n);
affichage(T,n);
comatrice(M,C,n);
affichage(C,n);

 getch();
}

