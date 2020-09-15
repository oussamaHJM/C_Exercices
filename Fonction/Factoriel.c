#include<stdio.h>
#include<conio.h>
int fact(int a)
    {
        int i,f;
        f=1;
        for(i=1;i<=a;i++)
            f=f*i;
        return f;
    }
int A,N;
void main()
{

    printf("Donnez A\n");
    scanf("%d",&A);
    if(A<0)
        printf("Le nbre entre est negatif\n");
    else
        printf("%d!=%d",A,fact(A));
}
