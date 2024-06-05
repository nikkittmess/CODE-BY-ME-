#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

int main()
{
	int n,i,*ptr,temp,j,first=0,last,middle,search;
	printf(" NAME : ALEETA TIMOTHY \n REG NO : 2162616");
	printf("\n\nENTER NUMBER OF ELEMENTS : \n ");
	scanf("%d",&n);
	
	ptr=(int*) malloc(n*4);
	printf("\n\nENTER ELEMENTS : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
    }
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(ptr[i] > ptr[j])
		    {
			    temp=ptr[i];
			    ptr[i]=ptr[j];
			    ptr[j]=temp;
		    }
		}
		
    }
    
    for(i=0;i<n;i++)
    {
    	printf("%d",ptr[i]);
	}
	
	printf("\n\nENTER ELEMENT TO SEARCH FOR: ");
	scanf("%d",&search);
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(*ptr+middle>search)
		{
			last=middle-1;
		}
		else if (*ptr+middle<search)
		{
			first=middle+1;
			
			
		}
		else if (*ptr+middle==search)
		{
			printf("MATCH FOUND ! \n AT INDEX = %d",middle);
			exit(0);
		}
		
		middle=(first+last)/2;
	}
}

