#include<stdio.h>
#include<conio.h>
int i,n,drp;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    drp=0;
    if(n==1)
        printf("1 est impair et il n'ya pas de nombres impaires inferieurs a 1\n");
    if(n==0)
        printf("0 est pair et il n'ya pas de nombres impaires inferieurs a 0\n");
    if(n>1)
        if(n%2==0)
            printf("%d est paire\n",n);
        else
        {
            drp=1;
            printf("%d est impaire\n",n);
        }

        if(drp==1)
            for (i=1;i<=n;i++)
                if(i%2==1)
                    printf("%d est un nombre impair inferieur a %d\n",i,n);
    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
