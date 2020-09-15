#include<stdio.h>
#include<conio.h>
struct heure
{
    int hh;
    int mn;
    int s;
};
struct heure h1,h2,h3;
int s1,s2,s3,aux;
void main()
{
    printf("Donnez heure de h1\n");
    scanf("%d",&h1.hh);
    printf("Donnez minute de h1\n");
    scanf("%d",&h1.mn);
    printf("Donnez seconde de h1\n");
    scanf("%d",&h1.s);
    printf("Donnez heure de h2\n");
    scanf("%d",&h2.hh);
    printf("Donnez minute de h2\n");
    scanf("%d",&h2.mn);
    printf("Donnez seconde de h2\n");
    scanf("%d",&h2.s);
    printf("Donnez heure de h3\n");
    scanf("%d",&h3.hh);
    printf("Donnez minute de h3\n");
    scanf("%d",&h3.mn);
    printf("Donnez seconde de h3\n");
    scanf("%d",&h3.s);
    s1=(h1.hh*3600)+(h1.mn*60)+h1.s;
    s2=(h2.hh*3600)+(h2.mn*60)+h2.s;
    s3=(h3.hh*3600)+(h3.mn*60)+h3.s;
    if(s1<s2 && s1<s3)
        printf("heure minimal est %dH %dM %dS",h1.hh,h1.mn,h1.s);
    if(s2<s1 && s2<s3)
        printf("heure minimal est %dH %dM %dS",h2.hh,h2.mn,h2.s);
    if(s3<s1 && s3<s2)
        printf("heure minimal est %dH %dM %dS",h3.hh,h3.mn,h3.s);
    getch();
}
