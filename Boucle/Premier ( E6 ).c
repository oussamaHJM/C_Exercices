#include<stdio.h>
#include<conio.h>
int i,n,drp;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    drp=0;
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
            drp=drp+1;
    }
    if(drp!=0)
        printf("%d n'est pas un nombre premier\n",n);
    else
        printf("%d est un nombre premier\n",n);
    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
