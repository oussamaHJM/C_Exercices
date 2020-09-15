#include<stdio.h>
int tab1[50],tab2[50],s;
int i,n;
main()
{
	n=0;
	while(n<=0||n>50)
	{
		printf("donner le nombre d'elements n \n");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("donner Tab1[%d] \n",i);
		scanf("%d",&tab1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("donner Tab2[%d] \n",i);
		scanf("%d",&tab2[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Tab1[%d]=%d \n",i,tab1[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Tab2[%d]=%d \n",i,tab2[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+tab1[i]*tab2[i];
	}
	printf("%d",s);
}
