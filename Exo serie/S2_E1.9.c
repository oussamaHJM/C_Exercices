#include<stdio.h>
#include<conio.h>
void main()
{
    float V,D,T,A,B;
    printf("Donnez la distance\n");
    scanf("%f",&D);
    printf("Donnez le temps\n");
    scanf("%f",&T);
    A=D/1000;
    B=T/3600;
    V=A/B;
    printf("la vitesse est = %f km/h\n",V);
    puts("Pour continuer frapper une touche...");
    getch();
}
