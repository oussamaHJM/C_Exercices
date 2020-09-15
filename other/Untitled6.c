#include<stdio.h>
#include<math.h>
#include<conio.h>
int nb,pu,tp;
void main()
{
    printf("donner le nombre des personnes");
    scanf("%d",&nb);
    printf("pour le dejeuner choisir 1\n pour le diner choisir 2");
    scanf("%d",&tp);
    if(nb==1)
        if(tp==1)
        pu=100;
        else
            if(tp==2)
            pu=50;
    else
    {
       if((nb>=5)&&(nb<10))
            if(tp==1)
                pu=80;
            else
                pu=40;
        else
            if(nb>=10)
                if(tp==1)
                    pu=70;
                else
                    if(tp==2)
                    pu=30;
    }
    printf("le prix unitaire est %d",pu);
    getch();
}
