#include<stdio.h>
#include<math.h>
int n,p,i,fn,c,fp,fnp;
void main()
 {
     printf("donner la val de n ");
     scanf("%d",&n);
     printf("donner la val de p ");
     scanf("%d",&p);
     fn=1;
     for(i=1;i<=n;i++)
          fn=fn*i;
     fp=1;
     for(i=1;i<=p;i++)
          fp=fp*i;
     fnp=1;
     for(i=1;i<=fnp;i++)
          fnp=fnp*i;
     c=fp/(fn*fnp);
     printf("C de n et p = %d",c);
 }
