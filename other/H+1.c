#include<stdio.h>
#include<conio.h>
int h,m,s;
void main()
{
    do
    {
       printf("donner l'heur");
        scanf("%d",&h);
        printf("donner la minute");
        scanf("%d",&m);
        printf("donner la seconde");
        scanf("%d",&s);
    }
    while((s<0)||(s>60)||(m<0)||(m>60)||(h<0)||(h>=23));
    if(s==59)
        if(m==59)
            if(h==23)
           {
             s=0;
             m=0;
             h=0;
           }
            else
            {
                h=h+1;
                m=0;
                s=0;
            }
        else
        {
            m=m+1;
            s=0;
        }
    else
        s=s+1;
printf("\nla nouvelle heure est:\n ");
printf("h: %d mn: %d s: %d",h,m,s);
}
