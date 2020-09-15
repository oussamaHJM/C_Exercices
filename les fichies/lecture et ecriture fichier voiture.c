#include<stdio.h>
int main()
{
    FILE *fichier;
    fichier=fopen("voiture.txt","w+");
    int matricule,n,i;
    char marque[20],prop[20];
    printf("donnerle nombre des voitures ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("donner le matricule du voiture  ");
        scanf("%d",&matricule);
        printf("donner la marque du voiture ");
        scanf("%s",&marque);
        printf("donner le proprietaire de la voiture    ");
        scanf("%s",&prop);
        fprintf(fichier,"%d ",matricule);
        fprintf(fichier,"%s ",marque);
        fprintf(fichier,"%s\n",prop);
    }
    for(i=0;i<n;i++)
    {
        fscanf(fichier,"%d %s %s\n",&matricule,&marque,&prop);
        printf("%d %s  %s\n",matricule,marque,prop);

    }

    fclose(fichier);
    return 0;
}

