#include<conio.h>
#include<math.h>
#include<stdio.h>
float c1s1,c2s1,mi,i1,i2,i3,nf;
void main()
{
    printf("donner la note du C1S1\n");
    scanf("%f",&c1s1);
    printf("donner la note du C2S1\n");
    scanf("%f",&c2s1);
    printf("donner la premier interogation\n");
    scanf("%f",&i1);
    printf("donner la 2eme interogation\n");
    scanf("%f",&i2);
    printf("donner la 3eme interogation\n");
    scanf("%f",&i3);
    mi=(i1+i2+i3)/3;
    c2s1=(0.2*mi)+(0.8*c2s1);
    nf=(c1s1+c2s1)/2;
    printf("la note semestriel est %f",nf);
    puts("tapper une touche pour continuer...");
    getch();
}

