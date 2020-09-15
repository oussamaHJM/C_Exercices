#include<stdio.h>
#include<conio.h>
struct h
{
    int hh;
    int mn;
    int s;
};
struct h h1,h2,h3,hm;
void main()
{
    printf("donner H1 \n");
    scanf("%d",&h1.hh);
    printf("donner mn1\n");
    scanf("%d",&h1.mn);
    printf("donner s1\n");
    scanf("%d",&h1.s);
    printf("donner H2\n");
    scanf("%d",&h2.hh);
    printf("donner mn2\n");
    scanf("%d",&h2.mn);
    printf("donner s1\n");
    scanf("%d",&h2.s);
    printf("donner H3\n");
    scanf("%d",&h3.hh);
    printf("donner mn3\n");
    scanf("%d",&h3.mn);
    printf("donner s3\n");
    scanf("%d",&h3.s);
    if(h1.hh<h2.hh)
        if(h1.hh<h3.hh)
            printf("l'heure minimale est h1");
        else
            if(h3.hh<h2.hh)
                printf("l'heure minimale est h3");
            else
                printf("l'heure minimale est h2");
    else
        if(h1.hh=h2.hh)
            if(h1.hh=h3.hh)
            {
                if(h1.mn<h2.mn)
                {
                    if(h1.mn<h3.mn)
                        printf("l'heure minimale est h1");
                    else
                        if(h3.mn<h2.mn)
                            printf("l'heure minimale est h3");
                        else
                            printf("l'heure minimale est h2");
                }
            }
            else
            {
               if(h1.mn=h2.hh)
                    if(h1.mn=h3.mn)
                    {
                        if(h1.s<h2.s)
                        {
                            if(h1.s<h3.s)
                                printf("l'heure minimale est h1");
                        else
                            if(h3.s<h2.s)
                                printf("l'heure minimale est h3");
                            else
                                printf("l'heure minimale est h2");
                        }
                    }
            }
}
getch();
