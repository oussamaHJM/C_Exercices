#include<stdio.h>
#include<string.h>
struct personne
    {
        char nom[10];
        int age;
        float taille;
    };
main()
{
    struct personne personne1;
    printf("donner le nom :\n");
    scanf("%s",&personne1.nom);
    printf("donner l'age \n");
    scanf("%d",&personne1.age);
    printf("donner la taille \n");
    scanf("%f",&personne1.taille);
    printf("nom :%s\n",personne1.nom);
    printf("age :%d\n",personne1.age);
    printf("age :%f\n",personne1.taille);
}
