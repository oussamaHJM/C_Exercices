#include<stdio.h>
#include<string.h>
struct etudiant
    {
        int numeroEtudiant;
        char prenom[20];
        char nom[20];
        float moyenne;
    };
void affEtudiant(struct etudiant * a)
{
    printf("%s\n",a->nom);
    printf("%s\n",a->prenom);
    printf("%d\n",a->numeroEtudiant);
    printf("%f\n",a->moyenne);
}

etudiant saisirEtudiant(struct etudiant * a)
{
    printf("donner le nom :\n");
    scanf("%s",&a.nom);
    printf("donner le prenom :\n");
    scanf("%s",&a.prenom);
    printf("donner numeroEtudiant \n");
    scanf("%d",&a.numeroEtudiant);
    printf("donner la taille \n");
    scanf("%f",&a.moyenne);
    return a;
}

structure classe{
    etudiant NB_etu[1000];
    float moyenne;
};

etudiant saisirclasse()
{
    int n;
    etudiant b;
    écrir("donner le nombre desetudiants de la classe");
    lire(n);
    pour(i=0;i<n;i++)
    {
        NB_etu[i]=saisirEtudiant(*b);
    }
}


float moyclasse(class c,int n)
{
    int i;
    float somme,moy;
    pourpour(i=0;i<n;i++)//n=nombres des etudiant;
    {
        somme=somme+c->NB_etu[i].moyenne;
    }
    moy=somme/n;
    return moy;
}


void affichclasse(int num)
{
    classe *c;
    float somme;
    pour(i=0;i<n;i++)
    {
        affEtudiant(c->NB_etu[num].moyenne);
    }
}
