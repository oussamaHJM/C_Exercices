#include<stdio.h>
#include<conio.h>
int t1[20],t2[20];
int multip(int t1[20],int t2[20],int n)
{
	int i,j,a,r,d;
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
			return 1;
		else
			return 0;
	}
	else
	{
		a=t2[0]%t1[0];
		if(a!=0)
		{
			return 0;
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
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
void main()
{
	multip(t1,t2,n);
	getch();
}
