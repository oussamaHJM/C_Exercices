#include<conio.h>
#include<stdio.h>
#include<math.h>
float dC,dF;
void main()
{
    printf("donner la temp�rature en Celsius\n");
    scanf("%f",&dC);
    dF=(9*dC/5)+32;
    printf("la temp�rature en fahrenheit est =%.2f \n",dF);
    puts("tapper une touche pour continuer...");
    getch();
}
