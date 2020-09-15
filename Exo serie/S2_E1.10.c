#include<stdio.h>
#include<conio.h>
void main()
{
    int C1,C2,C3;
    float Pp;
    C1=(25*500)/100;
    C2=(40*500)/100;
    C3=(35*500)/100;
    Pp=(500*100)/800;
    printf("le nbre de votes pour le candidat 1 est : %d\n",C1);
    printf("le nbre de votes pour le candidat 2 est : %d\n",C2);
    printf("le nbre de votes pour le candidat 3 est : %d\n",C3);
    printf("le pourcentage de participation aux elections  est : %2f %%\n",Pp);
    puts("Pour continuer frapper une touche...");
    getch();
}

