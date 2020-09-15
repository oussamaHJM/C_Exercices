#include<stdio.h>
#include<conio.h>
int i,j,f;
void main()
{
    for(i=1;i<10;i++)
        for(j=1;j<=10;j++)
            {
                f=i*j;
                printf("%d * %d = %d\n",i,j,f);
            }
    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
