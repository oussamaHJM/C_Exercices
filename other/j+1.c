#include<stdio.h>
#include<conio.h>
int j,m,r=0,a;
void main()
{
       do
    {
        printf("donner le jour");
        scanf("%d",&j);
        printf("donner le mois");
        scanf("%d",&m);
        printf("donner l'année");
        scanf("%d",&a);
    }
    while((a<=0)||(m<=0)||(m>=13)||(j<=0)||(j>31));
    if(m==12)
        if(j==31)
            {
                a=a+1;
                m=1;
                j=1;
            }
        else
            j=j+1;
    else
        if((m==4)||(m==6)||(m==9)||(m==11))
            if(j==30)
            {
                m=m+1;
                j=1;
            }
            else
                if(j<30)
                    j=j+1;
                else
                   r=1;
        else
            if(m==2)
                if((a%4)==0)
                    if(j==29)
                    {
                        j=1;
                        m=3;
                    }
                    else
                        if(j<29)
                            j=j+1;
                        else
                            r=1;
                else
                    if(j==28)
                    {
                        j=1;
                        m=3;
                    }
                    else
                        if(j<28)
                            j=j+1;
                        else
                           r=1;
            else
                if(j==31)
                {
                    j=1;
                    m=m+1;
                }
                else
                    j=j+1;
if(r==0)
    printf("a: %d  m: %d  j: %d ",a,m,j);
else
    printf("date incorrecte");
getch();

}

