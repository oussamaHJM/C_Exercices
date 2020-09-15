#include<stdio.h>
struct contact{
    char nom[20];
    char prenom[20];
    char adresse[30];
    char tel[20];
};
int n,i;
//struct contact t[];
main()
{
    FILE *fichier;
    fichier=fopen("contact.txt","w");
    printf("donner le nombre de contact que vous voulez créer \n");
    sacanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" nom %d : ",i+1);
        scanf("%s",&contact.nom);
        printf(" penom %d : ",i+1);
        scanf("%s",&contact.prenom);
        printf(" adresse %d : ",i+1);
        scanf("%s",&contact.adresse);
        printf(" TEL %d : ",i+1);
        scanf("%s",&contact.tel);
        printf("%s\n",contact.nom);
        printf("%s\n",contact.prenom);
        printf("%s\n",contact.adresse);
        printf("%s\n",contact.tel);
    }
    fclose(fichier);
}
