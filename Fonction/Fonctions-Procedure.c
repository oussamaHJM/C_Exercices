#include<stdio.h>
#include<conio.h>
int PGCD(int x,int y)
    {
        int pgcd,i,mini;
        if(x<y)
            mini=x;
        else
            mini=y;
        for(i=1;i<=mini;i++)
            if(x%i==0 & y%i==0)
                pgcd=i;
        return pgcd;
    }
int PPCM(int x,int y)
    {
        int ppcm,i,maxi;
        if(x<y)
            maxi=y;
        else
            maxi=x;
        i=maxi;
        do
        {
            if(i%x==0 & i%y==0)
                ppcm=i;
            i++;
        }
        while(((i-1)%x!=0) ||((i-1)%y!=0));
        return ppcm;
    }
    float moy(float x,float y)
    {
        float M;
        M=(x+y)/2;
        return M;
    }
int A,B,c;
void main()
{
    printf("Donnez A\n");
    scanf("%d",&A);
    printf("Donnez B\n");
    scanf("%d",&B);
    printf("Pour le PGCD , Tapez 1\n");
    printf("Pour le PPCM , Tapez 2\n");
    printf("Pour la MOYENNE , Tapez 3\n");
    printf("Donnez votre choix\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Le PGCD est %d",PGCD(A,B));break;
        case 2: printf("Le PPCM est %d",PPCM(A,B));break;
        case 3: printf("La MOYENNE est %f",moy(A,B));break;
        default :
            printf("Choix incorrect");
    }
}
