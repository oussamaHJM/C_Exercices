#include<stdio.h>
#include<conio.h>
void main()
{
    int V1,V2;
    float D,T,T1,T2;
   V1=120;
   V2=140;
   printf("Donnez la distance parcourue en km\n");
   scanf("%f",&D);
   T1=D/V1;
   T2=D/V2;
   T=(T1-T2)*3600;
    printf("l'ecart de temps en seconde est :%f secondes\n",T);
    puts("Pour continuer frapper une touche...");
    getch();
}

