#include<stdio.h>
#include<conio.h>
int n,F,i,j;
void main()
{
    printf("donne n\n");
    scanf("%d",&n);
    F=0;
    for(i=1 ; i<=n ; i++)
            {F=F+i;
            printf("i=%d\n",i);
            printf("Somme = %d\n",F);}
    printf("i=%d\n",i);
    getch();
}
