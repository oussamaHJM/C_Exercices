#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,calcul;
    char u,v;
    printf("bonjour");
    a=10;
    b=50;
    u=65;
    v='a';
    calcul=(a+b)*2;
    printf("\nvoici le resultat:%d\n",calcul);
    printf("1ere affichage de u:%d\n",u);
    printf("2eme affichage de v:%c\n",v);
    puts("pour continuer frapper une touche ...");
    getch();
}
