#include<stdio.h>
#include<string.h>
struct point
    {
        int x;
        int y;
        int z;
    };
struct point pointpuissance(struct point p)
{
    p.x=(p.x)*(p.x);
    p.y=(p.y)*(p.y);
    p.z=(p.z)*(p.z);
    return p;
};
void affich(struct point a)
{
    printf("%d\n",a.x);
    printf("%d\n",a.y);
    printf("%d\n",a.z);
}
main()
{
    struct point p1;
    printf("donner x :\n");
    scanf("%d",&p1.x);
    printf("donner y \n");
    scanf("%d",&p1.y);
    printf("donner z \n");
    scanf("%d",&p1.z);
    p1=pointpuissance(p1);
    affich(p1);
}
