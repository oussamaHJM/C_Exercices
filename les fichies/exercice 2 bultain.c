#include<stdio.h>
#include<conio.h>
struct bultain
{
    char etudiant[20];
    double ntmath;
    double ntphysic;
    double ntfrance;
    double art;
};
void calcule(struct bultain t[20],int n)
{
    int i;
    double moyenne;
    for(i=0;i<n;i++)
    {

        moyenne=((t[i].ntmath*8)+(t[i].ntphysic*6)+(t[i].ntfrance*4)+(t[i].art*2))/20;
    }
}
struct bultain t[20];
int n,i;
double moyenne,moyennecoef;
main()
{
    printf("donner le nombre des bultain ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("donner le nom d'étudiant N%d  ",i+1);
        scanf("%s",&t[i].etudiant);
        printf("donner la note dumath d'étudiant N%d  ",i+1);
        scanf("%lf",&t[i].ntmath);
        printf("donner la note du physique d'étudiant N%d  ",i+1);
        scanf("%lf",&t[i].ntphysic);
        printf("donner la note du français d'étudiant N%d  ",i+1);
        scanf("%lf",&t[i].ntfrance);
        printf("donner la note d'art d'etudiant N%d  ",i+1);
        scanf("%lf",&t[i].art);
    }
    calcule(t,n);
    //for(i=0;i<n;i++)
   // {
     //   moyenne=(t[i].ntmath+t[i].ntphysic+t[i].ntfrance+t[i].art)/4;
       // moyennecoef=((t[i].ntmath*8)+(t[i].ntphysic*6)+(t[i].ntfrance*4)+(t[i].art*2))/20;
       // printf("la moyenne d'etudiant N%d est= %lf \n",i+1,moyenne);
        //printf("la moyenne d'etudiant N%d avec les coefficients est= %lf \n",i+1,moyennecoef);
   // }
}
