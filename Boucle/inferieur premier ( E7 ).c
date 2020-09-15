#include<stdio.h>
#include<conio.h>
int j,i,n,drp;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);

        for(i=1;i<=n;i++)
            {
                drp=0;
                for(j=2;j<i;j++)
                    if(i%j==0)
                        drp=1;
                if(drp==0)
                    printf("%d est un nbre premier inferieur a %d\n",i,n);
            }


    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
