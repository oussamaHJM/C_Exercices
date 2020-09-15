#include<stdio.h>
#include<conio.h>
int t1[20],t2[20],dev[20];
int i,j,a,r,d,n;
void main()
{
	printf("donner le n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("t1[%d]",i);
		scanf("%d",&t1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("t2[%d]",i);
		scanf("%d",&t2[i]);
	}
	a=t1[0]%t2[0];
	if(a==0)
	{
	
		r=t1[0]/t2[0];
		d=0;
		i=0;
		do
		{
			if(r!=t1[i]/t2[i])
				d=1;
			i++;
		}
		while((i<n)&&(d==0));
		
		if(d==0)
			printf("t1 est multiple de t2\n");
		else
		printf("les deux matrice sont distinct");
	}
	else
	{
		a=t2[0]%t1[0];
		if(a!=0)
		{
			printf("les deux vecteur sont distinct\n");
		}
		else
		{
			r=t2[0]/t1[0];
			d=0;
			i=0;
			do
			{
					if(r!=t2[i]/t1[i])
					d=1;
					i++;
				}
				while((i<n)&&(d==0));
		}	
		if(d==0)
		{
			printf("t2 est multiple de t1\n");
		}
		else
		{
			printf("les deux matrice sont distinct");
		}
	}
	getch();
}
