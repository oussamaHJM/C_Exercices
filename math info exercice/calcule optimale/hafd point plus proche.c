
#include<stdio.h>
#include<math.h>
int H[300],i,X,Y,n,min,pos;
void lecture(int H[300],int n)
{
    for(i=0;i<n;i++)
    {
        printf("H[%d] : ",i);
        scanf("%d",&H[i]);
    }

}
void affichage(int H[30],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\n%d ",H[i]);
    }

}

int point_proche(int H[300],int X,int Y,int n)
{float min,S,d;
int pos,i;
min=198978;
    for(i=0;i<n;i++)
    {
        if(i==0&&i==1)
        {
          S=(X-H[0])*(X-H[0])+(Y-H[1])*(Y-H[1]);
          d=sqrt(S);
            if(d<min)
            {
                min=d;
                pos=0;
            }
          }
        else

        {
            if(i%2==0)
                     {S=(X-H[i])*(X-H[i])+(Y-H[i+1])*(Y-H[i+1]);
                     d=sqrt(S);
                            if(d<min)
                              {
                                  min=d;
                                   pos=i;
                               }
                     }

        }
}
 return pos;
}
void P3P(int X,int Y,int H[300],int n)
{
int tmp[300],r[300];
int p,i,k,c;

for(i=0;i<n;i++)
{tmp[i]=H[i];}

    p=point_proche(tmp,X,Y,n);
    printf("\np = %d",p);
    r[0]=tmp[p];
    r[1]=tmp[p+1];
    tmp[p]=500;
    tmp[p+1]=500;

    k=point_proche(tmp,X,Y,n);
    printf("\nk = %d",k);
    r[2]=tmp[k];
    r[3]=tmp[k+1];
    tmp[k]=500;
    tmp[k+1]=500;

    c=point_proche(tmp,X,Y,n);
    printf("\nc = %d",c);
    r[4]=tmp[c];
    r[5]=tmp[c+1];
    tmp[c]=500;
    tmp[c+1]=500;
    for(i=0;i<6;i++)
    {
       printf("\nr%d = %d",i,r[i]);
    }
}






main()
{int p;
    printf("Dne svp le nbr des Habitations ");
    scanf("%d",&n);
    printf("\nX : ");
    scanf("%d",&X);
    printf("\nY : ");
    scanf("%d",&Y);
    lecture(H,n);
    affichage(H,n);
    printf("\n\n********** Le point PProch ***********\n\n");
    p=point_proche(H,X,Y,n);
    printf("\nle point:\nX: %d\nY: %d",H[p],H[p+1]);
    printf("\n\n**************************************\n\n");


    printf("\n\n********** Les points 3 PProch ***********\n\n");
    P3P(X,Y,H,n);
    printf("\n\n**************************************\n\n");
}
