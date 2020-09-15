#include<stdio.h>
#include<conio.h>
int A[20][20];
int i,j,l,d,c,k,M,p;
main()
{
    printf("Donnez le nbre de lignes\n");
    scanf("%d",&l);
    printf("Donnez le nbre de colonnes\n");
    scanf("%d",&c);
      printf("Lecture de la matrice A\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nA%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Affichage de A\n");
    for(i=0;i<l;i++)
	{
	printf("\n");
	for(j=0;j<c;j++)
        printf("%d   ",A[i][j]);
	}

    for(i=0;i<l;i++)
    {
        M=A[i][0];
        for(j=0;j<c;j++)
        {
            if(M<A[i][j])
        		{
        		    M=A[i][j];
                    p=j;
        		}
        }
        d=0;
        for(k=0;k<l;k++)
        {
            if(A[k][p]!=A[i][p])
            {
                if(A[i][p]>A[k][p])
                    d=1;
            }
        }
        if(d==0)
            printf("\nA[%d][%d]= %d est un point col",i,p,A[i][p]);
    }
	getch();
}
