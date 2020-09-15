#include<stdio.h>
#include<conio.h>
float MA,AN,AL,FR,S,MOY;
char N,P;
void main()
{
    printf("Donnez \nle nom\n");
    scanf("%s",&N);
    printf("Donnez le prenom\n");
    scanf("%s",&P);
    printf("Donnez la note en math\n");
    scanf("%f",&MA);
    printf("Donnez la note en anglais\n");
    scanf("%f",&AN);
    printf("Donnez la note e francais\n");
    scanf("%f",&FR);
    printf("Donnez la note en algorithmme\n");
    scanf("%f",&AL);
    S=MA*2+AN*3+FR*5+AL*6;
    MOY=S/16;
    printf("La somme est S=%f\n",S);
    printf("La moyenne est MOY=%f\n",MOY);
    if(MOY<10)
        printf("Non admis et Mention=****");
    else
    {
        printf("Admis\n");
        if(MOY<12)
            printf("Mention=passable");
        else
            if(MOY<14)
            printf("Mention=Abien");
            else
                if(MOY<16)
                printf("Mention=Bien");
                else
                    printf("Mention=Tres bien");

    }
    puts("Tapez sur une touche pour continuer");
    getch();
}
