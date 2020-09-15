#include<stdio.h>
main()
{
    FILE *nbr1;
    FILE *nbr2;
    FILE * somme;
	int i,n1,n2,s;
    nbr1=fopen("tabnbr1.txt","r");
    nbr2=fopen("tabnbr2.txt","r");
    somme=fopen("tabsomme2.txt","w");
    while(!feof(nbr1)&&!feof(nbr2))
    {
    	fscanf(nbr1,"%d",&n1);
	    fscanf(nbr2,"%d",&n2);
	    fprintf(nbr1,"%d",n1);
	    fprintf(nbr2,"%d",n2);
	    s=n1+n2;
		fprintf(somme,"%d\n",s);
	}
	system("dir");
    fclose(somme);
    fclose(nbr2);
	fclose(nbr1);
    
}
