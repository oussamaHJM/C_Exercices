#include<conio.h>
#include<stdio.h>
#include<math.h>
float t,t1,t2,d;
float v;
void main()
{
    printf("donner la distac nce parcourue par la voiture\n");
    scanf("%f",&d);
    printf("donner le temps\n");
    scanf("%f",&t);
    v=3.6*d/t;
    printf("la vitesse de la voiture est%f km/h \n",v);
    puts("tapper une touche pour continuer...");
    getch();
}
