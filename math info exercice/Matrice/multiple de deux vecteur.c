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
   if(drp==1)
   return 0;
   else
   return 1;
}



void lecture(int M[20][20],int n)
{

	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
		{	printf("M[%d][%d]= ",i,j);
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

main()
{
    int i,j,n,l,nl,k,r;
    int d,M[20][20],A[20][20],B[20],S[20],Mx[20][20];
 printf("donner le nombre des lignes et des colonnes \n");
  scanf("%d",&n);

 printf("\nlecture de la matrice M\n");
 lecture(M,n);
 printf("\nAffichage de la matrice M\n");
 affichage(M,n);
 r=multmat(M,n);
 if(r==1)
 printf("\n la matrice est correct M\n");
 else
 printf("\n la matrice contient des ligne identique M\n");
 getch();
}
 
