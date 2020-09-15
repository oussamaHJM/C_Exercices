#include<stdio.h>
main()
{
	int *ad;
	int n=20;
	ad=&n;
	printf("*ad =%d ",*ad);
	*ad=30;
	printf("*ad =%d ",*ad);
}
