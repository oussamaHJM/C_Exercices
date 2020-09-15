#include<stdio.h>
#include<conio.h>
void main()
{
    float C,F;
    printf("Donnez la valeur en celcius\n");
    scanf("%f",&C);
    F=((9*C)/5)+32;
    printf("la valeur en Farenheit est :%2f Degre Farenheit",F);
    puts("Pour continuer frapper une touche...");
    getch();
}

