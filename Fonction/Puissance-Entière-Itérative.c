#include<stdio.h>
#include<conio.h>
float Puiss(float x,int y)
    {
        float P;
        int i;
        P=1;
        for(i=0;i<y;i++)
            P=P*x;
        return P;
    }
float A;
int N;
void main()
{
    printf("Donnez A\n");
    scanf("%f",&A);
    printf("Donnez N\n");
    scanf("%d",&N);
    printf("%f^%d=%f",A,N,Puiss(A,N));
}
