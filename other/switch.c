#include<stdio.h>
#include<conio.h>
#include<math.h>
float d,a,b,c,x1,x2,ix1,ix2,rx1,rx2;
int s;
void main()
{
    printf("donner A");
    scanf("%f",&a);
    printf("donner b");
    scanf("%f",&b);
    printf("donner c");
    scanf("%f",&c);
    printf("pour R tappez 1 \n pour C tapper 2");
    scanf("%d",&s);
    d=(b*b)-(4*(a*c));
    switch(s)
    {
        case 1:{if(a==0)
                  if(b==0)
                    if (c!=0)
                          printf("impossible");
                    else
                    printf("l'ensemble R");
                   else
                    printf("la solution est %f",-c/b);
                else
                if(d==0)
                {
                    x1=(-b)/(2*a);
                    printf("la solution est double est =%f",x1);
                }
                else
                    if(d>0)
                    {
                        x1=((-b)+sqrt(d))/(2*a);
                        x2=((-b))-sqrt(d)/(2*a);
                        printf("les solutions sont \n x1=%f  \n  x2=%f",x1,x2);
                    }
                    else
                        printf("impossible dans R");
        break;}
        case 2:{if(a==0)
                  if(b==0)
                    if (c!=0)
                          printf("impossible");
                    else
                    printf("l'ensemble R");
                   else
                    printf("la solution est %f",-c/b);
                else
                if(d==0)
                {
                    x1=(-b)/(2*a);
                    printf("la solution est double est =%f",x1);
                }
                else
                    if(d>0)
                    {
                        x1=((-b)+sqrt(d))/(2*a);
                        x2=((-b))-sqrt(d)/(2*a);
                        printf("les solutions sont \n x1=%f  \n  x2=%f",x1,x2);
                    }
                    else
                        {
                            d=-d;
                            ix1=sqrt(d)/(2*a);
                            ix2=-sqrt(d)/(2*a);
                            rx1=-b/(2*a);
                            rx2=-b/(2*a);
                            printf("les solutions sont \n %.2f+i%.2f \n et \n %.2f+i%.2f",rx1,ix1,rx2,ix2);
                        }
    break;}
    default :
        printf("votre choix est incorrect");
       }
}
