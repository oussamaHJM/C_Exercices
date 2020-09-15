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
			printf("%f  ",M[i][j]);

	}
}
void cpmat(float Ms[20][20],float Mc[20][20],int n,int nl)
{
	int l,c;
	for(l=0;l<nl;l++)
	{
		for(c=1;c<n;c++)
		{
			Mc[l][c-1]= Ms[l][c];
		}
	}	
 	for(l=nl;l<n-1;l++)
 	{
 		for(c=1;c<n;c++)
 		{
 			Mc[l][c-1]= Ms[l+1][c];
		}
	}
}
float det(float M[20][20],int n)
{
    int i;
    float A[20][20];
    int signe=1;
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
    }
	return d;
}
void transpose(float M[20][20],float T[20][20],int n)
{
    int i,j;
    float x;
	for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
        {
            x=M[j][i];
            M[j][i]=T[i][j];
            T[i][j]=x;
        }
    }
}
void comatrice(float M[20][20],float C[20][20],int n)
{
    int i,j;
    float A[20][20];
    transpose(M,A,n);
    if((det(M,n))==0)
    {
    	printf("M n'est pas inversible");
	}
    else
    {
    	for(i=0;i<n;i++)
	    {
	       	for(j=0;j<n;j++)
	       	{
	       		C[i][j]=(1/det(M,n))*(A[i][j]);
			}
		} 
    }
}
main()
{
    int i,j,n,l,nl;
    float M[20][20],A[20][20],T[20][20],C[20][20],d;
 	printf("donner le nombre des lignes et des colonnes  ");
 	scanf("%d",&n);
	lecture(M,n);
 	printf("********* affichache du matrice **********\n");
 	affichage(M,n);
	for(i=0;i<n;i++)
 	{	
		cpmat(M,A,n,i);
 		printf("\npour i=%d\n",i);
 		d=det(M,n);
 		affichage(A,n-1);
	}
	printf("\n********* affichache de det **********\n");
	printf("le determinant de M est = %f\n",d);
	transpose(M,T,n);
	printf("\n********* affichache de transpos **********\n");
	affichage(T,n);
	comatrice(M,C,n);
	printf("\n********* affichache du comatrice **********\n");
	affichage(C,n);
 getch();
}

