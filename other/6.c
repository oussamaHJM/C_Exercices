#include<stdio.h>
#include<math.h>
#include<conio.h>
float n,pu,mb,tx,mnet;
void main()
{
    printf("donner le nombre de KWH");
    scanf("%f",&n);
    if(n<100)
        pu=0.80;
    else
    {
      if(n<300)
        pu=1.20;
      else
        pu=2;
    }
     mb=pu*n;
     tx=mb*0.17
     mn=mb+tx;
     printf("le montant brut est",mb);
     printf("la taxe est",tx);
     printf("le montant net est",mn);

}
