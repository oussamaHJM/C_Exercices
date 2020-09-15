#include<stdio.h>
#include<math.h>
#include<conio.h>
int A;
void main ()
{
    printf("Donnez l'annee\n");
    scanf("%d",&A);
    if(A%4==0)
        printf("l'annee est bissextile \n",A);
    else
        printf("l'annee n'est pas bissextile \n",A);
    puts("Tapez sur une touche pour continuer");
    getch();
}
