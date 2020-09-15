#include<stdio.h>
#include<conio.h>
float k_m(float x)
    {
        float S;
        S=1.609*x;
        return S;
    }
float K;
void main()
{
    printf("Donnez la valeur en kilometres\n");
    scanf("%f",&K);
    printf("La valeur en miles est M=%f",k_m(K));
}
