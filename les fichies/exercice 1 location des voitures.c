#include<stdio.h>
#include<conio.h>
struct voiture
{
    int mat;
    char mrq[20];
    double puiss;
    int nbrlocation;
};
struct voiture t[100];
int n,i;
main()
{
    printf("donner le nombre des voitures N \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("donner le matricule du voiture N %d\n",i);
        scanf("%d",&t[i].mat);
        printf("donner la marque du voiture N %d\n",i);
        scanf("%s",&t[i].mrq);
        printf("donner la puissance du voiture N %d\n",i);
        scanf("%lf",&t[i].puiss);
    }
    for(i=0;i<n;i++)
    {
        printf("le matricule du voiture numero %d est : %d\n",i,t[i].mat);
        printf("la marque du voiture numero %d est : %s\n",i,t[i].mrq);
        printf("la puissance du voiture N %d est :%lf\n",i,t[i].puiss);
    }
}
