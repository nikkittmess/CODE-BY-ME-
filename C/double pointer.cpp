#include "Stdio.h"

int main()
{
	
	int a[]={10,20,30,40,50};
	int *p[]={a,a+1,a+2,a+3,a+4};
	
	int **ptr=p;
	
	ptr++;
	
	printf("%d %d %d",ptr-p,*ptr-a,**ptr);
	*ptr++;

    printf("\n%d %d %d",ptr-p,*ptr-a,**ptr);
	*ptr++;
	
	printf("\n%d %d %d",ptr-p,*ptr-a,**ptr);
	*ptr++;
	
	printf("\n%d %d %d",ptr-p,*ptr-a,**ptr);
	*ptr++;
	
	
}
