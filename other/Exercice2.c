#include<stdio.h>
#include<conio.h>
float PU,MB,MHT,Taxe,TVA,MTTC,Red;
int Q;
void main ()
{
    printf("Donnez le prix unitaire\n");
    scanf("%f",&PU);
    printf("Donnez la quantite\n");
    scanf("%d",&Q);
    MB=Q*PU;
    printf("Le montant brut est MB=%.2f\n",MB);
    if(Q<20)
        Red=0;
    else
    {
        if(Q<100)
            Red=0.1;
        else
            Red=0.12;
    }
    MHT=MB-(MB*Red);
    printf("Le montant hors taxe est MHT=%.2f\n",MHT);
    TVA=0.20;
    Taxe=MHT*TVA;
    MTTC=MHT+Taxe;
    printf("Le montant tout taxe compris est MTTC=%.2f\n",MTTC);
    printf("Pour continuer Tapez sur une touche\n");
    getch();
}
