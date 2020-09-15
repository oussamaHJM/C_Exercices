#include<stdio.h>
#include<conio.h>
int i,N,F;
void main()
{
    printf("Donnez N\n");
    scanf("%d",&N);
    F=1;
    for(i=1;i<=N;i++)
        F=F*i;
    printf("%d!=%d\n",N,F);
    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
