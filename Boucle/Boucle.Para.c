#include<stdio.h>
#include<conio.h>
int a,b,i,j,k;
void main()
{
    printf("Donnez a\n");
    scanf("%d",&a);
    printf("Donnez b\n");
    scanf("%d",&b);
    for(j=0; j<=b ; j++)
    {
        for(k=0; k<=j ; k++)
            printf("  ");
        for(k=j; k<=(a+j) ; k++)
            printf("* ");

        printf("\n");
    }
    printf("Pour continuer Tapez sur une touche");
    getch();
}

