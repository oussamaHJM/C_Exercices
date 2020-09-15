#include<stdio.h>
#include <conio.h>
#include <math.h>
void rsa(int n)
{
int a,r,va;
while(1){
a=floor(sqrt(n));
va=fabs(a*a-n);
r=sqrt(va);
if(r==floor(r))
{
printf("a=%d , b=%d",a,sqrt(a*a-n));
break;
}
    a=a+1;
    return rsa(n);

    }
    return 0;
}
int main(void)
{
int n,a;
printf("saisissez un nombre: ");
scanf("%d",&n);
rsa(n);
return 0;
}
