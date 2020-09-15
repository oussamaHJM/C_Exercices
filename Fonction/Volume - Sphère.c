#include<stdio.h>
#include<conio.h>
float Sphere(float x)
    {
        float v;
        v=(x*x*x*3.14*4)/3;
        return v;
    }
float R;
void main()
{
    printf("Donnez le rayon\n");
    scanf("%f",&R);
    printf("Le volume du sphère est V=%f",Sphere(R));
}
