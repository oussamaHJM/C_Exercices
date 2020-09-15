#include<conio.h>
#include<math.h>
#include<stdio.h>
float d,t,t1,t2;
void main()
{
    printf("donner la distance en kilometre\n");
    scanf("%f",&d);
    t1=d/140;
    t2=d/120;
    t=(t2-t1)*3600;
    printf("l'ecart des temps d'arrivés est %f S \n",t);
    puts("tapper une touche pour continuer...");
    getch();
}
