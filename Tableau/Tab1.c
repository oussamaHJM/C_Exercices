#include<stdio.h>
#include<conio.h>
float T[20];
int i;
void main()
{
    for(i=0;i<20;i++)
    {
        printf("T[%d]",i);
        scanf("%f",&T[i]);
    }
    printf("\n affichage du tableau\n");
    for(i=0;i<20;i++)
        printf("\n T[%d]=%f",i,T[i]);
    getch();
}
