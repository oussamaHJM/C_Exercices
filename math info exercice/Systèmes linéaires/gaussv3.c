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
			printf("%0.1f    ",h[i][j]);
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

void pivotg(float M[20][20], float B[20], int n)
{
    int i,j,k;
    float p,q;
	q=M[0][0];
	for(i=1;i<n;i++)
    {
        p= M[0][i];
        for(j=0;j<n;j++)
        {
            M[i][j]=M[i][j]*q;
            M[i][0]=M[i][0]*p;
        }
        B[i]=B[i]*q;
        B[0]=B[0]*p;
        for(k=0;k<n;k++)
            M[i][k]=M[i][k]-M[0][k];
            B[i]=B[i]-B[0];
	}
	for(k=0;k<n;k++)
		 M[0][k]=M[0][k]/p;
		 B[0]=B[0]/p;
}

main()
{float M[20][20], B[20];
int i,j,n,m,k,l;
float p,q;

	printf("donner le n");
	scanf("%d",&n);

	lecturem(M,n);
	affichagem(M,n);

	lecturev(B,n);
	affichagev(B,n);

        /* pivotg(M,B,n);*/
 	for(l=0;l<n;l++)
 	{
 	    q=M[l][l];
 	    for(i=l+1;i<n;i++)
        {
            p= M[i][l];
        for(j=l;j<n;j++)
		{
		    M[l][j]=M[l][j]*p;
		    M[i][j]=M[i][j]*q;
		}
		B[i]=B[i]*q;
		B[l]=B[l]*p;
		for(k=l;k<n;k++)
            M[i][k]=M[i][k]-M[l][k];
            B[i]=B[i]-B[l];
        for(k=0;k<n;k++)
            M[l][k]=M[l][k]/p;
            B[l]=B[l]/p;
        }
    }

    q=M[0][1];
	for(i=1;i<n;i++)
     {
	  p= M[1][i];
	   for(j=0;j<n;j++)
		{M[0][j]=M[0][j]*p;
		 M[1][j]=M[1][j]*q;
		}
		 B[0]=B[0]*p;
		 B[1]=B[1]*q;

      for(k=i;k<n;k++)
		 M[0][k]=M[0][k]-M[1][k];

		 B[0]=B[0]-B[1];

	for(k=0;k<n;k++)
		 M[1][k]=M[1][k]/q;
		 B[1]=B[1]/q;

	}
        printf("\n la matrice Systme echlonnée \n");
		affichagem(M,n);
		printf("\n la matrice Systme echlonnée \n");
		affichagev(B,n);

}
