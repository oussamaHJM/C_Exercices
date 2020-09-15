#include<stdio.h>
int i,n,U,V,Un;

main()
{
  printf("dne svp la le U a calculer ");
  scanf("%d",&n);

if(n==0||n==1)
    {printf("U%d = %d",n,n);}
else
{
 U=0;
 V=1;
for(i=1;i<n;i++)
{     Un=U+V;
      U=V;
      V=Un;
}
 printf("U%d = %d",i,Un);
}

}
