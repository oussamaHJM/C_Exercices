#include<stdio.h>
#include<conio.h>
void main()
{
    float D,eu;
    printf("Donnez la valeur en dirhams \n");
    scanf("%f",&D);
    eu=D/10;
    printf("la valeur en euros est :%2f euros",eu);
    puts("Pour continuer frapper une touche...");
    getch();
}
