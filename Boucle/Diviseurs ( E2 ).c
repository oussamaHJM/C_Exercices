#include<stdio.h>
#include<conio.h>
int n,i;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        if(n%i==0)
            printf("%d est un diviseur de %d\n",i,n);
    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
