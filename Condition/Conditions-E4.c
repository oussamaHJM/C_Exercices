#include<stdio.h>
#include<conio.h>
int Q;
float Red,Pu,MB,MHT,Taxe,TVA,MTTC;
void main()
{
    printf("Donnez le prix unitaire\n");
    scanf("%f",&Pu);
    printf("Donnez la quantite\n");
    scanf("%d",&Q);
    MB=Q*Pu;
    printf("Le montant brut est MB=%f\n",MB);
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
    printf("le montant hors taxe est MHT=%f\n",MHT);
    TVA=0.20;
    Taxe=MHT*TVA;
    printf("la taxe est Taxe=%f\n",Taxe);
    MTTC=MHT+Taxe;
    printf("le montant net a payer est MTTC=%f\n",MTTC);
    puts("Tapez sur une touche pour continuer");
    getch();
}
