#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,t;
    printf("donnez a \n");
    scanf("%d",&a);
    printf("donnez b \n");
    scanf("%d",&b);
    printf("donnez c \n");
    scanf("%d",&c);
    t=a;
    a=b;
    b=c;
    c=t;
    printf("a: %d\n b=%d\n c=%d\n",a,b,c);
    puts("Pour continuer frapper une touche...");
    getch(); /* Attente d'une saisie clavier */

}
