#include<stdio.h>
#include<conio.h>
float FC(float x)
    {
        float S;
        S=((x-32)*5)/9;
        return S;
    }
float F;
void main()
{
    printf("Donnez la temperature en Fahrenheit\n");
    scanf("%f",&F);
    printf("La temperature en centigrades est Tc=%f",FC(F));
}
