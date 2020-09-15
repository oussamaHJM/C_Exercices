#include<stdio.h>
#include<math.h>
int n,i,fn;
void main()
 {
     printf("donner la val de n ");
     scanf("%d",&n);
     fn=1;
     for(i=1;i<=n;i++)
          fn=fn*i;
     printf("%d != %d",n,fn);
 }
