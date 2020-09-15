#include<conio.h>
#include<stdio.h>
#include<math.h>
int nf,ng,t,pf,pg;
void main()
{
    printf("donner le nombre des garçons\n");
    scanf("%d",&ng);
    printf("donner le nombre des filles\n");
    scanf("%d",&nf);
    t=ng+nf;
    pf=(nf*100)/t;
    pg=(ng*100)/t;
    printf("le pourcontage des garçons est %d \n le pourcentage des filles est %d \n",pg,pf);
    puts("tapper une touche pour continuer...");
    getch();
}

