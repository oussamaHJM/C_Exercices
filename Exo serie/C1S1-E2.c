#include<stdio.h>
#include<conio.h>
float C1S1,C2S1,I1,I2,I3,M,I;
void main()
{
    printf("Donnez la note de C1S1\n");
    scanf("%f",&C1S1);
    printf("Donnez la note de C2S1\n");
    scanf("%f",&C2S1);
    printf("Donnez la note de I1\n");
    scanf("%f",&I1);
    printf("Donnez la note de I2\n");
    scanf("%f",&I2);
    printf("Donnez la note de I3\n");
    scanf("%f",&I3);
    I=((I1+I2+I3)/3)*0.25;
    C2S1=(C2S1*0.75)+I;
    M=(C2S1+C1S1)/2;
    printf("la note semestrielle est M=%f\n",M);
    puts("Tapez sur une touche pour continuer");
    getch();
}
