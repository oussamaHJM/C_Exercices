#include<stdio.h>
#include<conio.h>
int i,j,n;
int M[20][20],B[20];
int multvect(int t1[20],int t2[20],int n)
{
    int i,j,a,drp; float r;
    a=t1[0]%t2[0];
    if(a==0)
    {
        r=t1[0]/t2[0];
        drp=0;
        j=1;
        do
        {
            if(r!=(t1[j]/t2[j]))
                drp=1;
            j++;
        }
        while((j<n)&&(drp==0));
    if(drp==0)
        return 1;
    else
        return 0;
    }
        else
        {
            a=t2[0]%t1[0];
            if(a!=0)
                return 0;
            else
            {
                r=t2[0]/t1[0];
                drp=0;
                j=1;
                do
                {
                if(r!=(t2[j]/t1[j]))
                    drp=1;
                j++;
                }
                while((j<n)&&(drp==0));
            }
            if(drp==0)
                return 1;
            else
                return 0;

        }
}

int multmat(int M[20][20],int n)
{int i,j,r,k,drp=0; int t1[20],t2[20];
   i=0;
   do
   {   for(j=0;j<n;j++)
	  			t1[j]=M[0][j];

        for(k=0;k<n;k++)
			 if(k!=0)
			 {
			 for(j=0;j<n;j++)
	  			t2[j]=M[k][j];
	  		     r=multvect(t1,t2,n);
			  if(r==1)
			    drp=1;
			 }
	i++;
   }
   while((i<n)&&(drp==0));
   if(drp==0)
        return 1;
   else
        return 0;
}



void lecture(int M[20][20],int n)
{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
	    {
			printf("M[%d][%d]= ",i,j);
			scanf("%d",&M[i][j]);
		}

}
void affichage(int M[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		printf("\n ");
		for(j=0;j<n;j++)
			printf("%d  ",M[i][j]);

	}
}
void cpmat(int Ms[20][20],int Mc[20][20],int n,int nl)
{
    int l,c;
for(l=0;l<nl;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l][c];
 for(l=nl;l<n-1;l++)
		for(c=1;c<n;c++)
			Mc[l][c-1]= Ms[l+1][c];

}
float det(int M[20][20],int n)
{
    int i;
    int A[20][20];
    int signe=1;
    int d=0;
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
    int d,M[20][20],A[20][20],B[20],S[20],Mx[20][20];
 printf("donner le nombre des lignes et des colonnes \n");
  scanf("%d",&n);

 printf("\nlecture de la matrice M\n");
 lecture(M,n);

 printf("\nAffichage de la matrice M\n");
 affichage(M,n);

 for(i=0;i<n;i++)
 {
     printf("\nB[%d] ",i);
     scanf("%d",&B[i]);
 }

 for(i=0;i<n;i++)
    printf("B[%d]=%d\n",i,B[i]);

 for(i=0;i<n;i++)
 		{cpmat(M,A,n,i);
 		 printf("\n pour i=%d\n",i);
 		 d=det(M,n);
 		 affichage(A,n-1);
		 }

printf("\nle determinant de M est = %d \n",d);
printf("\nResolution du systeme\n");
if(multmat(M,n)==1)
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
        printf("\nS[%d]=%d",i,S[i]);
	}
	else
	{
    printf("\nPas de solution\n");
	}
else
 printf("\n le systeme à une infinite de solutions\n");
}
