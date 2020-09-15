#include<stdio.h>
#include<conio.h>
float M[20][20],t[20][20],cm[20][20],t[20][20];
int i,j,n,l,nl,d;
float A[20][20];
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
	{	for(j=0;j<n;j++)
			printf("%.1f  ",M[i][j]);
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
int det(float M[20][20],int n)
  {
	int i;
	float A[20][20];
	int signe=1;
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
void transpo(float t[20][20],float M[20][20],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[i][j]=M[j][i];
           // printf("\n **t[%d][%d] : %.0f",i,j,t[i][j]);
        }
    }
}
void comat(float M[20][20],float cm[20][20],int n)
{
    transpo(M,A,n);

   // affichage(a,n);
    if(det(M,n)==0)
    {
        printf("M[][] nest pas invesible");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cm[i][j]=(1/det(M,n))*A[i][j];
            }
        }
    }
    printf("********* comatrice ***********\n");
    affichage(cm,n);
}
main()
    {
     printf("donner le nombre des lignes et des colonnes \n");
     scanf("%d",&n);
     lecture(M,n);
     affichage(M,n);
     printf("\n");
 	 for(i=0;i<n;i++)
    {
        cpmat(M,A,n,i);
        printf("\npour i=%d\n",i);
        affichage(A,n-1);
    }
    d=det(M,n);
    printf("le derterminant du M = %d",d);
    printf("\n");
    transpo(t,M,n);
    printf("********* transpo ***********\n");
    affichage(t,n);
    printf("\n");
    comat(M,cm,n);
    //affichage(cm,n);


 getch();
}

