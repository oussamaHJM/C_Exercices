#include<stdio.h>
#include<conio.h>
int i,n,j,r;
struct date
{
    int jj;
    int mm;
    int aa;
};
struct etudiant
{
    float mb;
    char nom[10];
struct  date dN;
};
struct etudiant T[20],aux;
void main()
{
    do
        {
            do
                {
                    printf("Donnez n\n");
                    scanf("%d",&n);
                }
            while((n<0) || (n>=20));
            for(i=0;i<n;i++)
            {
                    printf("T[%d].nom ",i);
                    scanf("%s",&T[i].nom);
                    printf("T[%d].mb ",i);
                    scanf("%f",&T[i].mb);
                do
                {
                    printf("T[%d].jj ",i);
                    scanf("%d",&T[i].dN.jj);
                    printf("T[%d].mm ",i);
                    scanf("%d",&T[i].dN.mm);
                    printf("T[%d].aa ",i);
                    scanf("%d",&T[i].dN.aa);
                }
            while((T[i].dN.jj<=0) || (T[i].dN.jj>31)|| (T[i].dN.mm<=0) || (T[i].dN.mm>12) || (T[i].dN.aa<=0));
            }

            printf("AFFICHAGE DU CONTENU\n");
            for(i=0;i<n;i++)
                {
                    printf("\nT[%d].nom=%s",i,T[i].nom);
                    printf("\nT[%d].mb=%f",i,T[i].mb);
                    printf("\nT[%d].jj=%d",i,T[i].dN.jj);
                    printf("\nT[%d].mm=%d",i,T[i].dN.mm);
                    printf("\nT[%d].aa=%d",i,T[i].dN.aa);
                }
            for(i=0;i<n;i++)
                for(j=i+1;j<n;j++)
                    if(T[i].mb>T[j].mb)
                    {
                        aux=T[i];
                        T[i]=T[j];
                        T[j]=aux;
                    }
            printf("\nAFFICHAGE APRES LE TRIE \n");
            for(i=0;i<n;i++)
                {
                    printf("\nT[%d].nom=%s",i,T[i].nom);
                    printf("\nT[%d].mb=%f",i,T[i].mb);
                    printf("\nT[%d].jj=%d",i,T[i].dN.jj);
                    printf("\nT[%d].mm=%d",i,T[i].dN.mm);
                    printf("\nT[%d].aa=%d",i,T[i].dN.aa);
                }
            printf("\nDonnez votre reponse\n");
            scanf("%d",&r);
        }
        while(r==1);
getch();
}
