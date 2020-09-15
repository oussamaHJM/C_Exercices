#include<stdio.h>
#include<conio.h>
void main()
{
    int F,G,T;
    float P1,P2;
    printf("Donnez le nombre de filles\n");
    scanf("%d",&F);
     printf("Donnez le nombre de garcons\n");
    scanf("%d",&G);
    T=F+G;
    P1=(F*100)/T;
    P2=(G*100)/T;
    printf("le pourcentage de filles = %f\n",P1);
    printf("le pourcentage de garcons = %f\n",P2);
    puts("Pour continuer frapper une touche...");
    getch();
}
