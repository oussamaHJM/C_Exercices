#include<stdio.h>
#include<conio.h>
int ch;
float A,B,C,Moy,S,Pr,t;
void main ()
{
    printf("Donnez A\n");
    scanf("%f",&A);
    printf("Donnez B\n");
    scanf("%f",&B);
    printf("Donnez C\n");
    scanf("%f",&C);
    if(A>B)
    {
        t=A;
        A=B;
        B=t;
    }
    if(A>C)
    {
        t=A;
        A=C;
        C=t;
    }
    if(B>C)
    {
        t=B;
        B=C;
        C=t;
    }
    printf("Les valeurs apres le trie sont : %.0f %.0f %.0f\n",A,B,C);
    printf("Pour afficher leur somme Tapez 1\n");
    printf("Pour afficher leur produit Tapez 2\n");
    printf("Pour afficher leur moyenne Tapez 3\n");
    printf("Donnez votre choix\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            {
                S=A+B+C;
                printf("Leur somme est S=%.0f\n",S);
            break;}
        case 2 :
            {
                Pr=A*B*C;
                printf("Leur produit est Pr=%.0f\n",Pr);
            break;}
        case 3 :
            {
                Moy=(A+B+C)/3;
                printf("Leur moyenne est Moy=%.2f\n",Moy);
            break;}
        default :
            printf("Votre choix est incorrect\n");
    }
    printf("Pour continuer Tapez sur une touche\n");
    getch();
}

