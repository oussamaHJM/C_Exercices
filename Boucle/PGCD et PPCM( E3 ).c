#include<stdio.h>
#include<conio.h>
int a,b,maxi,mini,i,p,pgcd,ppcm;
void main()
{
    printf("Donnez a\n");
    scanf("%d",&a);
    printf("Donnez b\n");
    scanf("%d",&b);
    if(a<b)
        mini=a;
    else
        mini=b;
    i=mini;
    for(i=1;i<mini;i++)
        if(a%i==0 & b%i==0)
            pgcd=i;
    printf("Le pgcd de %d et %d est : %d\n",a,b,pgcd);
  if(a<b)
        maxi=b;
    else
        maxi=a;
    i=maxi;
    do
        {
            if(i%a==0 & i%b==0)
                ppcm=i;
        i=i+1;
        }
    while(((i-1)%a!=0) || ((i-1)%b!=0));
    printf("Le ppcm de %d et %d est : %d\n",a,b,ppcm);

    printf("Pour continuer , tapez sur une touche\n");
    getch();
}
