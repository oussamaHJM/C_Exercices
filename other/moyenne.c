#include<stdio.h>
#include<conio.h>
int n,i,,rep,j;
struct etudiant
{
    char nom[20];
    float moybac;
    int    dn;
};
struct etudiant aux;
void main()
{
do
{
    printf("donner le nombre des cases \n");
    scanf("%d",&n);
    struct etudiant t[n];
    for(i=0;i<n;i++)
        {priintf("T[",i,"].nom\n");
        scanf("%s"&t[i].nom\n);
        priintf("T[",i,"].moybac\n");
        scanf("%f"&t[i].moybac\n);
        priintf("T[",i,"].dn\n");
        scanf("%d"&t[i].dn);}
    for(i=0;i<n;i++)
        {printf("%s"t[i].nom);
        printf("%f"t[i].moybac);
        printf("%d"t[i].dn);}
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(t[i]>t[j])
                {aux=t[i];
                 t[i]=t[j];
                 t[j]=aux;}
    printf("si vous voulez rexecuter le programme tapper 1\n");
    scanf("%d",&rep);


}
while(rep>=0)
}
