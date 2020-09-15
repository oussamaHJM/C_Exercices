#include<stdio.h>
#include<math.h>
int n,i,u0,u,u1;
main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    u0=3;
    for(i=0;i<=n;i++)
    {
        u=(3*u0)+4;
        u0=u;

    }
    printf("U(%d)=%d",n+1,u);
}
