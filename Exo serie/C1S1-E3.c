#include<stdio.h>
#include<conio.h>
int N,PU,M,R;
void main()
{
    printf("Donnez le nombre de personnes\n");
    scanf("%d",&N);
    printf("Donnez le type de repas\n");
    scanf("%d",&R);
    if(N==1)
    {
        if(R==1)
            PU=100;
        else
            PU=50;
    }
    if(N>=5 & N<10)
    {
        if(R==1)
            PU=80;
        else
            PU=40;
    }
    if(N>=10)
    {
        if(R==1)
            PU=70;
        else
            PU=30;
    }
    M=PU*N;
    printf("le montant a payer est M=%d Dirhams\n",M);
    puts("Tapez sur une touche pour continuer");
    getch();
}
