#include<stdio.h>
#include<conio.h>
void main()
{
    float At,Bt,Ap,Bp,N,st,sp;
    printf("Donnez la largeur du terrain\n");
    scanf("%f",&At);
    printf("Donnez la longueur du terrain\n");
    scanf("%f",&Bt);
    printf("Donnez la largeur du parapluie\n");
    scanf("%f",&Ap);
    printf("Donnez la longueur du parapluie\n");
    scanf("%f",&Bp);
    st=At*Bt;
    sp=Ap*Bp;
    N=st/sp;
    printf("le nombre de parapluie necessaire pour un terrain donne est : %f\n",N);
    puts("Pour continuer frapper une touche...");
    getch();
}


