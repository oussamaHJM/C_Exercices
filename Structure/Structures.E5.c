#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,n,nb,j,k,r,s1,s2,s3;

struct heure
{
    int m;
    int h;
};
struct tiquets
{
    float pu;
    int code;
struct  heure HD,HA;
};
struct tiquets T[20];
void main()
{
    do
    {
        do
        {
            printf("Donnez n\n");
            scanf("%d",&n);
        }
        while((n<0) || (n>=20));
        for(i=0;i<n;i++)
        {
            printf("T[%d].code ",i);
            scanf("%d",&T[i].code);
            printf("T[%d].pu ",i);
            scanf("%f",&T[i].pu);
        do
        {
            printf("T[%d].hd.h ",i);
            scanf("%d",&T[i].HD.h);
            printf("T[%d].hd.m ",i);
            scanf("%d",&T[i].HD.m);

        }
        while((T[i].HD.m<0) || (T[i].HD.m>59) || (T[i].HD.h<0)||(T[i].HD.h>23));
        do
        {
            printf("T[%d].ha.h ",i);
            scanf("%d",&T[i].HA.h);
            printf("T[%d].ha.m ",i);
            scanf("%d",&T[i].HA.m);

        }
            while((T[i].HA.m<0) || (T[i].HA.m>59) || (T[i].HA.h<0)||(T[i].HA.h>23));

        }
        for(i=0;i<n;i++)
            {
                printf("\nT[%d].code=%d",i,T[i].code);
                printf("\nT[%d].pu=%f",i,T[i].pu);
                printf("\nT[%d].h=%d",i,T[i].HD.h);
                printf("\nT[%d].m=%d",i,T[i].HD.m);
                printf("\nT[%d].h=%d",i,T[i].HA.h);
                printf("\nT[%d].m=%d",i,T[i].HA.m);

            }
        for (j=0;j<24;j++)
            {
                nb=0;
                for(i=0;i<n;i++)
                    if(T[i].HD.h==j)
                        {
                            nb=nb+1;

                        }
        printf("\nLe nbre de  tiquets de %d heure est %d ",j,nb);

            }


        for(i=0;i<n;i++)
            {
                s1=((T[i].HD.m)*60+(T[i].HD.h)*3600);
                s2=((T[i].HA.m)*60+(T[i].HA.h)*3600);
                s3=abs(s2-s1);
                if(s3>=7200)
                {
                    printf("\nT[%d].code=%d",i,T[i].code);
                }
            }
        printf("\nDonnez votre reponse\n");
        scanf("%d",&r);
        }
        while(r==1);
getch();
}
