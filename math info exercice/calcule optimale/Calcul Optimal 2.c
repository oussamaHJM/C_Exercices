#include<stdio.h>
#include<math.h>

 float H[100][100],d;
    int n,i,j,x,y;
void lecture (float H[100][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        {
            printf("H[%d][%d]",i,i);
            scanf("%f",&H[i][j]);
        }
}
void affichage (float H[100][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
            printf("H[%d][%d]=%f\n",i,j,H[i][j]);
    }

}
int pointproche(int x,int y,float H[100][100])
{
    int p;
    d=(sqrt(pow((H[0][0]-x),2)+pow((H[0][1]-y),2)));
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if(d>(sqrt(pow((H[i][j]-x),2)+pow((H[i][j+1]-y),2))))
            {
                d=(sqrt(pow((H[i][j]-x),2)+pow((H[i][j+1]-y),2)));
                p=i;
            }
        }
    }
return p;

}
int TPP(int x,int y,float H[100][100])
{
    int p;
    d=(sqrt(pow((H[0][0]-x),2)+pow((H[0][1]-y),2)));
    for(i=0;i<n;i++)
        {   for(j=0;j<2;j++)
                {
                    if(d>(sqrt(pow((H[i][j]-x),2)+pow((H[i][j+1]-y),2))))
                        {
                            d=(sqrt(pow((H[i][j]-x),2)+pow((H[i][j+1]-y),2)));
                            p=i;
                        }

                }

        }
return p;

}
main()
{

        printf("donnez n");
        scanf("%d",&n);
        lecture(H,n);
        affichage(H,n);
        printf("donnez x");
        scanf("%d",&x);
        printf("donnez y");
        scanf("%d",&y);
        printf("le point le plus proche est %d",pointproche(x,y,H));
}
