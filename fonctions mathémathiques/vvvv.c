#include<stdio.h>
struct personne
{
char nom[10];
int age;
float taille;
};
int i;
main()
{
struct personne T[3];
for(i=0;i<3;i++)
{
printf("donner le nom :\n");
scanf("%s",&T[i].nom);
printf("donner l'age \n");
scanf("%d",&T[i].age);
printf("donner la taille \n");
scanf("%f",&T[i].taille);
}
for(i=0;i<3;i++)
{
printf("***** personne %d *****\n",i+1);
printf("nom :%s\n",T[i].nom);
printf("age :%d\n",T[i].age);
printf("age :%f\n",T[i].taille);
}
}
