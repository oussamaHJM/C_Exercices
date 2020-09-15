#include<stdio.h>
#include<conio.h>
int i,j,m,h,drp,k,f[1000],b[10000];
void main()
{
    printf("donne la valeur de m");
    scanf("%d",&m);
    k=0;
    for(i=0;i<m;i++)
    {
    printf("t[%d] :",i);
    scanf("%d",&b[i]);
    }
    for(j=0;j<m;j++)
    {
        drp=0;
        for(i=2;i<b[j];i++)
            if(b[j]%i==0)
                drp=1;
        if(drp==0)
        {
            f[k]=b[j];
            k=k+1;
        }
    }
        for(i=0;i<k;i++)
            printf("f[%d] : %d",i,f[i]);
    getch();
}
