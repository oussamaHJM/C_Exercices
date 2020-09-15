#include<stdio.h>
#include<conio.h>
#include<math.h>
float r,h,V;
void main()
{
    printf("donner le rayon\n");
    scanf("%f",&r);
    printf("donner la hauteur\n");
    scanf("%f",&h);
    V=((r*r)*3.14)*h;
    printf("le volume=%.2f\n",V);
    puts("pour continuer frapper une touche ...");
    getch();
}
