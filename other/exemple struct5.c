#include<stdio.h>
#include<string.h>
struct personne
    {
        char nom[10];
        char tel[10];
        int age;
    };
struct personne inc_age(struct personne p)
{
    p.age++;
    return p;
};
struct personne t[3];
void affich(struct personne a)
{
    printf("%s\n",a.nom);
    printf("%s\n",a.tel);
    printf("%d\n",a.age);
}
int i;
main()
{
    for(i=0;i<3;i++)
    {
        printf("donner le nom :\n");
        scanf("%s",&t[i].nom);
        printf("donner le tel \n");
        scanf("%s",&t[i].tel);
        printf("donner l'age \n");
        scanf("%d",&t[i].age);
    }
    for(i=0;i<3;i++)
    {
        affich(t[i]);
    }
    for(i=0;i<3;i++)
    {
        t[i]=inc_age(t[i]);
    }
    for(i=0;i<3;i++)
    {
        affich(t[i]);
    }

}

