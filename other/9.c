#include<stdio.h>
#include<math.h>
#include<conio.h>
float c1s1,c2s1,i1,i2,i3,ns,moyc1,moyc2,moyi;
void main()
{
    printf("donner la note du c1s1\n");
    scanf("%f",&c1s1);
    printf("donner la note du c2s1\n");
    scanf("%f",&c2s1);
    printf("donner la moyene de interogation 1\n");
    scanf("%f",&i1);
    printf("donner la moyene de interogation 2\n");
    scanf("%f",&i2);
    printf("donner la moyene de interogation 3\n");
    scanf("%f",&i3);
    moyi=(i1+i2+i3)/3;
    moyc1=c1s1;
    moyc2=(c2s1*0.75)+(moyi*0.25);
    ns=(moyc1+moyc2)/2;
    printf("la note semestrielle de la matiere est %f ",ns);
    getch();

}
