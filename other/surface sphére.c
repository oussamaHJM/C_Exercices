#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float r,s;
    printf("donner le rayon\n ");
    scanf("%f",&r);
    s=4*3.14*(r*r);
    printf("la surface est=%f.2",s);
    puts("frapper une touche pour continuer...");
    getch();
}
