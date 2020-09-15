#include<stdio.h>
#include<conio.h>
void main()
{
    float h,r,v;
    printf("Donnez la valeur du rayon\n");
    scanf("%f",&r);
    printf("Donnez la valeur de la hauteur\n");
    scanf("%f",&h);
    v=h*r*r*3.14;
    printf("le volume est : %2f",v);
    puts("Pour continuer frapper une touche...");
    getch();
}
