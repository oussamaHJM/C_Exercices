#include<stdio.h>                 /* bibliotheque d'entrees-sorties standard  */
#include<conio.h>
void main()
{
int a,b,calcul; /* declaration de 3 variables */
char u,v;
printf("BONJOUR"); /* utilisation d'une fonction-bibliotheque*/
a= 10; /* affectation */
b= 50; /* affectaion */
u=65;
v='A';
calcul = (a+b)*2; /* affectaion et opearateurs */
printf("voici le resultat : %d\n",calcul);
printf("1er affichage de u:%d\n",u);
printf("2eme affichafe de v:%c\n",u);
printf("1er affichage de u:%d\n",v);
printf("2eme affichafe de v:%c\n",u);
puts("Pour continuer frapper une touche...");
getch(); /* Atente d'une saisie clavier */
}
