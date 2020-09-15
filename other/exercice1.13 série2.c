#include<conio.h>
#include<math.h>
#include<stdio.h>
float s,sp,att,np,btt,bp,ap;
void main()
{
    printf("donner la largeur du terrain\n");
    scanf("%f",&att);
    printf("donner la longueur du terrain\n");
    scanf("%f",&btt);
    printf("donner la largeur du terrain\n");
    scanf("%f",&att);
    printf("donner la largeur du terrain\n");
    scanf("%f",&att);
    printf("donner la largeur des parapluies\n");
    scanf("%f",&ap);
    printf("donner la langueur des parapluies\n");
    scanf("%f",&bp);
    s=att*btt;
    sp=ap*bp;
    np=s/sp;
    printf("le nombre des parapluies nécessairenest %f",np);
    puts("tapper une touche pour continuer...");
    getch();
}
