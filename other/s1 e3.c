#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float n,s;
    printf("donner les demmention du carrée\n");
    scanf("%f",&n);
    s=n*n;
    printf("la surface est =%.2f\n",s);
    puts("pour continuer frapper une touche...");
    getch();
}
