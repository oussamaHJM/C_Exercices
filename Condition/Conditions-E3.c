#include<stdio.h>
#include<conio.h>
int N;
float Pu,MB,Taxe,TVA,MTTC;
void main()
{
    printf("Donnez le nombre de kw/h consomme\n");
    scanf("%d",&N);
    if(N<100)
        Pu=0.80;
    else
    {
        if(N<300)
            Pu=1.20;
        else
            Pu=2;
    }
    TVA=0.17;
    MB=N*Pu;
    printf("le montant brut a payer est MB=%f\n",MB);
    Taxe=MB*TVA;
    printf("la taxe est Taxe=%f\n",Taxe);
    MTTC=MB+Taxe;
    printf("le montant net a payer est MTTC=%f\n",MTTC);
    puts("Tapez sur une touche pour continuer");
    getch();
}
