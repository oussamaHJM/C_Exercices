#include<stdio.h>
#include<conio.h>
struct date
{
    int jj;
    int mm;
    int aa;
};
struct date T[20],aux;
int i,n,j;
void main()
{
    do
    {
        printf("Donnez n\n");
        scanf("%d",&n);
    }
    while((n<0) || (n>=20));
for(i=0;i<n;i++)
    {
        do
        {
            printf("T[%d].jj",i);
            scanf("%d",&T[i].jj);
            printf("T[%d].mm",i);
            scanf("%d",&T[i].mm);
            printf("T[%d].aa",i);
            scanf("%d",&T[i].aa);
        }
        while((T[i].jj<=0)||(T[i].jj>31)||(T[i].mm<=0)||(T[i].mm>12)||(T[i].aa<=0));
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",T[i].jj);
        printf("\n%d",T[i].mm);
        printf("\n%d",T[i].aa);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(T[i].aa>T[j].aa)
                {
                    aux=T[i];
                    T[i]=T[j];
                    T[j]=aux;
                }
            else
            {
                if(T[i].aa==T[j].aa)
                {
                    if(T[i].mm>T[j].mm)
                    {
                        aux=T[i];
                        T[i]=T[j];
                        T[j]=aux;

                    }
                }

                    else
                    {
                        if(T[i].mm==T[j].mm)
                        {
                            if(T[i].jj>T[j].jj)
                            {
                                aux=T[i];
                                T[i]=T[j];
                                T[j]=aux;
                            }

                        }
                    }
            }
    printf("\n affichage du tableau\n");
    for(i=0;i<n;i++)
        printf("\n T[%d].jj=%d T[%d].mm=%d T[%d].aa=%d",i,T[i].jj,i,T[i].mm,i,T[i].aa);
    getch();
}



