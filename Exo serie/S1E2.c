#include<stdio.h>
#include<conio.h>
void main()
{
    char c ;
    c=66;
    printf("%d\n",c);          /* c est le resultat alphanumerique A */
                               /* affichage du code ASCII en decimal */
                               /* et retout ... la ligne */
    printf("%o\n",c);           /* affichage du code ASCII en base huit
                               /* et retour ... la ligne */
    printf("%x\n",c);          /* affichafe du code ASCIIC en hexadecimal
                               /* et retour ... la ligne */
    printf("%c\n",c);          /* affichage du caractere */
                               /* et retour ^ la ligne */
    puts("Pour continuer frapper une touche...");
    getch(); /* Attente d'une saisie clavier */
}
