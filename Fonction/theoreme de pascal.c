#include<stdio.h>
#include<conio.h>
int fact(int x)
{
    int f,i;
    f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
int combin(int x,int y)
{
    int k,c;
    k=y-x;
    c=fact(y)/(fact(x)*fact(k));
    return c;
}
void thp(int z)
{
    int i,j;
    for(i=0;i<=z;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",combin(j,i));
        printf("\n");
    }
}
int n,rep;
void main()
{
    do
    {
    printf("donne ordre a la quelle ont doit arreter");
    scanf("%d",&n);
    thp(n);
    printf("tape 1 pour recomencer");
    scanf("%d",&rep);
    }
    while(rep==1);
    getch();
}
