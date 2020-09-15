#include<stdio.h>
#include<math.h>

 float H[100],d,r[6];
    int n,i,j,x,y;
void lecture (float H[100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        {
            printf("H[%d]",i);
            scanf("%f",&H[i]);
        }
}
void affichage (float H[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("H[%d]=%f\n",i,H[i]);


}
int pointproche(int x,int y,float H[100],int n)
{
    int p,i,n;
    float d;
    d=(sqrt(pow((H[0]-x),2)+pow((H[1]-y),2)));
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(d>(sqrt(pow((H[i]-x),2)+pow((H[i+1]-y),2))))
                {
                    d=(sqrt(pow((H[i]-x),2)+pow((H[i+1]-y),2)));
                        p=i/2;
                }

        }

    }
return p;

}
int  TPP(int x,int y,float H[100],int n)
{
    int pos,i,n;
    float d,tmp[100],r[6];
    for(i=0;i<n;i++)
        tmp[i]=H[i];
   pos=pointproche(x,y,tmp,n);
    r[0]=tmp[pos];
    r[1]=tmp[pos+1];
    tmp[pos]=10000;
    tmp[pos+1]=10000;
    pos=pointproche(x,y,tmp,n);
    r[2]=tmp[pos];
    r[3]=tmp[pos+1];
    tmp[pos]=10000;
    tmp[pos+1]=10000;
    pos=pointproche(x,y,tmp,n);
    r[4]=tmp[pos];
    r[5]=tmp[pos+1];
    tmp[pos]=10000;
    tmp[pos+1]=10000;
    return r;
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
    printf("le point le plus proche est %d\n",pointproche(x,y,H,n));
    printf("\nLes points les plus proche %d",TPP(x,y,H,n));
}
