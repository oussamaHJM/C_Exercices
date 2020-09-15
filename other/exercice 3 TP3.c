#include<stdio.h>
#include<string.h>
struct personne
    {
        char nom[10];
        int age;
        float taille;
    };
void affich(struct personne a)
{
    printf("%s\n",a.nom);
    printf("%d\n",a.age);
    printf("%f\n",a.taille);
}
main()
{
    struct personne personne1;
    printf("donner le nom :\n");
    scanf("%s",&personne1.nom);
    printf("donner l'age \n");
    scanf("%d",&personne1.age);
    printf("donner la taille \n");
    scanf("%f",&personne1.taille);
    affich(personne1);
}
