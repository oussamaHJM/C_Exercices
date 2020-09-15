#include<stdio.h>
#include<conio.h>
void main()
{
    float s,r,pi;
    printf("donnez le rayon \n");
    scanf("%f,",&r);
    s=(3.14*r*r*4);
    printf( "la surface est s=%2f",s);
    puts("Pour continuer frapper une touche...");
    getch(); /* Attente d'une saisie clavier */
}
