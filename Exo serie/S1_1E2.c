#include<stdio.h>
#include<conio.h>

void main()
{
    float moy,s,nm,ang,fran,algo;
    char nom,prenom;
    printf(" Donnez le nom \n");
    scanf("%s",&nom);
    printf(" Donnez le prenom \n");
    scanf("%s",&prenom);
    printf(" Donnez la note en math \n");
    scanf("%f",&nm);
    printf(" Donnez la note en anglais \n");
    scanf("%f",&ang);
    printf(" Donnez la note en français  \n");
    scanf("%f",&fran);
    printf(" Donnez la note en algorithme \n");
    scanf("%f",&algo);
    s=((nm*2)+(ang*3)+(fran*5)+(algo*6));
    moy=(s/16);
    printf("moyenne : %f",moy);
    puts("Pour continuer frapper une touche...");
    getch(); /* Attente d'une saisie clavier */
}
