#include<stdio.h>
#include<conio.h>
void main()
{
    float C1S1,C2S1,E1,E2,E3,M,M1;
    printf("Donnez la note de C1\n");
    scanf("%f",&C1S1);
    printf("Donnez la note de C2\n");
    scanf("%f",&C2S1);
    printf("Donnez la note de E1\n");
    scanf("%f",&E1);
    printf("Donnez la note de E2\n");
    scanf("%f",&E2);
    printf("Donnez la note de E3\n");
    scanf("%f",&E3);
    M1=(E1+E2+E3)/3;
    M1=(M1*20)/100;
    C2S1=(C2S1*80)/100;
    C2S1=C2S1+M1;
    M=(C1S1+C2S1)/2;
    printf("la note semestrielle est : %f\n",M);
    puts("Pour continuer frapper une touche...");
    getch();
}

