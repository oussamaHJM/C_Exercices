#include<stdio.h>
#include<conio.h>
#include<math.h>
float nm,na,nf,nal,s,moy;
char n[10],p[10];
void main()
{
    printf("donner votre nom\n");
    scanf("%s",&n);
    printf("donner votre prenom\n");
    scanf("%s",&p);
    printf("donner la note du math\n");
    scanf("%f",&nm);
    printf("donner la note d'anglais\n");
    scanf("%f",&na);
    printf("donner la note du français\n");
    scanf("%f",&nf);
    printf("donner la note d'algorithme\n");
    scanf("%f",&nal);
    s=(nm+na+nf+nal)*16;
    moy=s/16;
    if(moy<10)
        printf("non admis");
    else
    {
        printf("admis");
        if(moy<12)
            printf("passable");
        else
            if(moy<14)
                printf("A.B");
            else
                if(moy<16)
                    printf("Bien");
                else
                    printf("Trée Bien");
    }
    getch();
}

