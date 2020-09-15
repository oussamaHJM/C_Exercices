#include<stdio.h>
#include<conio.h>
float Salarie(int nbh,int Sh)
    {
        float M;
        if(nbh<=35)
            M=nbh*Sh;
        else
            M=(35*Sh)+((nbh-35)*Sh*1.5);
        return M;
    }
float S;
int H;
void main()
{
    printf("Donnez le nbre heure effectue\n");
    scanf("%d",&H);
    printf("Donnez le salaire horaire\n");
    scanf("%f",&S);
    printf("Sa paye hebdomadaire est S=%f",Salarie(H,S));
}
