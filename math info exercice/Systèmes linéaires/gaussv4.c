#include<stdio.h>
#include<math.h>

void lecturem(float M[20][20],int n)
{int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("H[%d][%d] ",i,j);
			scanf("%f",&M[i][j]);
		}
	}
}

void affichagem(float h[20][20],int n)
{int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f    ",h[i][j]);
		}
		printf("\n");
	}
}

void lecturev(float h[20],int n)
{int i,j;
	for(i=0;i<n;i++)
		{
			printf("H[%d] ",i);
			scanf("%f",&h[i]);
		}
}

void affichagev(float h[20],int n)
{int i,j;
		for(j=0;j<n;j++)
			printf("%f  ",h[j]);
		printf("\n");
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
{float M[20][20],mc[20][20],B[20],t[20],l[20],s[20];
int i,j,n,m,k,lk,d;
float p,q;

	printf("donner le n");
	scanf("%d",&n);

	lecturem(M,n);
	affichagem(M,n);

	lecturev(B,n);
	affichagev(B,n);
 	for(i=0;i<n;i++)
 		{cpmat(M,mc,n,i);
 		 printf("\npour i=%d\n",i);
 		 d=det(M,n);
 		 affichagem(mc,n-1);
		 }
		  printf("\nle determinant de M est = %f \n",d);


if(det!=0){
 	for(lk=0;lk<n;lk++)
 	{
	 q=M[lk][lk];
	for(i=lk+1;i<n;i++)
     {
	  p= M[i][lk];
	   for(j=lk;j<n;j++)
		{M[lk][j]=M[lk][j]*p;
		M[i][j]=M[i][j]*q;
		}
		 B[i]=B[i]*q;
		 B[lk]=B[lk]*p;

      for(k=lk;k<n;k++)
		 M[i][k]=M[i][k]-M[lk][k];

		 B[i]=B[i]-B[lk];

	for(k=0;k<n;k++)
		 M[lk][k]=M[lk][k]/p;
		 B[lk]=B[lk]/p;

	}
    }


for(i=0;i<n;i++)
{

    for(j=i+1;j<n;j++)
    {
    	q=M[j][j];
    	p= M[i][j];
    	if(p!=0){

    	for(k=0;k<n;k++)
    	{
    		l[k]=M[i][k]*q;
    		t[k]=M[j][k]*p;
		}
		for(k=0;k<n;k++)
    	{
    		M[i][k]=l[k]-t[k];

		}

		B[j]=B[j]*p;
		B[i]=B[i]*q;
		B[i]=B[i]-B[j];
		for(k=0;k<n;k++)
		{
			M[j][k]=t[k];
		}
		}
	}
	for(k=0;k<n;k++)
	{
		s[i]=B[i]/M[i][i];
	}


}
affichagev(s,n);
}
else
{
	printf("le systéme n'a pas de solution");
}
affichagev(s,n);
    printf("\n la matrice Systme echlonnée \n");
	affichagem(M,n);
	printf("\n la matrice Systme echlonnée \n");
	affichagev(B,n);

}
