#include<stdio.h>
main()
{
    FILE *nbr1;
    FILE *nbr2;
    FILE * somme;
	int i,t[5],n[5],s[5];
    nbr1=fopen("tabnbr1.txt","r");
    nbr2=fopen("tabnbr2.txt","r");
    somme=fopen("tabsomme.txt","w");
    for(i=0;i<5;i++)
    {
    	fscanf(nbr1,"%d",&t[i]);
	    fscanf(nbr2,"%d",&n[i]);
	    fprintf(nbr1,"%d",t[i]);
	    fprintf(nbr2,"%d",n[i]);
	}
	for(i=0;i<5;i++)
	{
		s[i]=t[i]+n[i];
		fprintf(somme,"%d\n",s[i]);
	}
    fclose(somme);
    fclose(nbr2);
	fclose(nbr1);
    
}
