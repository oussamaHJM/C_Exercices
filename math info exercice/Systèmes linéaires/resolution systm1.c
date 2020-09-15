#include<stdio.h>
#include<conio.h>
int i,j,n;
float M[20][20],B[20];

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
    }
        return d;
}
main()
{
    int i,j,n,l,nl,k;
    float d,M[20][20],A[20][20],B[20],S[20],Mx[20][20];
 printf("donner le nombre des lignes et des colonnes \n");
  scanf("%d",&n);

   printf("\nlecture de la matrice M\n");
 lecture(M,n);
 printf("\nAffichage de la matrice M\n");
 affichage(M,n);
 for(i=0;i<n;i++)
 {
     printf("\nB[%d] ",i);
     scanf("%f",&B[i]);
 }
 for(i=0;i<n;i++)
    printf("B[%d]=%f\n",i,B[i]);

 for(i=0;i<n;i++)
 		{cpmat(M,A,n,i);
 		 printf("\npour i=%d\n",i);
 		 d=det(M,n);
 		 affichage(A,n-1);
		 }
		  printf("\nle determinant de M est = %f \n",d);
printf("\nResolution du systeme\n");
if(det(M,n)!=0)
{
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
            for(j=0;j<n;j++)
                if(j==i)
                    Mx[k][j]=B[k];
                else
                    Mx[k][j]=M[k][j];
    S[i]=det(Mx,n)/det(M,n);
    }
    printf("\nLes solutions sont\n");
    for(i=0;i<n;i++)
        printf("\nS[%d]=%f",i,S[i]);
}
else
{
    printf("\nPas de solution\n");
}

}
