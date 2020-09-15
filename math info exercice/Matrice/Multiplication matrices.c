#include<stdio.h>
#include<math.h>
int M[20][20],N[20][20], s[20][20];
int i,j,k,p,LM,CM,LN,CN;
main()
{
    printf("donne le nbr de ligne");
    scanf("%d",&LM);
    printf("donne le nbr de colonne");
    scanf("%d",&CM);
    printf("remplissage du tableau M \n");
    for(i=0;i<LM;i++)
        for(j=0;j<CM;j++)
        {
            printf("M[%d][%d]:\n",i,j);
            scanf("%d",&M[i][j]);
        }
    printf("remplissage du tableau N \n");
    printf("donne le nbr de ligne");
    scanf("%d",&LN);
    printf("donne le nbr de colonne");
    scanf("%d",&CN);
    for(i=0;i<LN;i++)
        for(j=0;j<CN;j++)
        {
            printf("N[%d][%d]:\n",i,j);
            scanf("%d",&N[i][j]);
        }
    if(CM!=LN)
        printf("Produit impossible\n");
    else
    {
        for(i=0;i<LM;i++)
        {
            for(j=0;j<CN;j++)
            {
                p=0;
                for(k=0;k<CM;k++)
                {
                    p=p+(M[i][k]*N[k][j]);
                    s[i][j]=p;
                }
            }

            }
        printf("la multiplication  est \n");
    for(i=0;i<LM;i++)
    {

        for(j=0;j<CN;j++)
            printf("%d   ",s[i][j]);
        printf("\n");
    }

    }
	getch();
}
