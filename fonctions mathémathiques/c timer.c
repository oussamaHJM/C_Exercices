#include<stdio.h>
#include<windows.h>
main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==10)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d--",i);
            Sleep(3000);
        }
    }
}

