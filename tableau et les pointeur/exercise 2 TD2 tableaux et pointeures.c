#include<stdio.h>
int t[10];
int max,pos;
main()
{
    int *p;
    pos=0;
    for(p=t;p<10+t;p++)
    {
        printf("t[%d]",p-t);
        scanf("%d",&*p);
    }
    max=0;
    for(p=t;p<10+t;p++)
    {
        if(max<=*p)
        {
            max=*p;
            pos=p-t;
        }
    }
    printf("max =%d\n",max);
    printf("pos=%d",pos);
}
