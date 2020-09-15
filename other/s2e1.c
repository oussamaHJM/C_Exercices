#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    char n,p;
    float nm,na,nf,nal,s,moy;
    printf("donnez votre nom\n");
    scanf("%s",&n);
    printf("donner le prenom\n");
    scanf("%s",&p);
    printf("donner la note du math\n");
    scanf("%f",&nm);
    printf("donner la note d aglais\n");
    scanf("%f",&na);
    printf("donner la note du français\n");
    scanf("%f",&nf);
    printf("donner la note d algorithme\n");
    scanf("%f",&nal);
    s=(nm*2)+(na*3)+(nf*5)+(nal*6);
    moy=s/2;
    printf("la somme est =%.2f\n",s);
    printf("la moyenne est=%.2f\n",moy);
    puts("pour continuer frapper une touche ...");
    getch();
}
