#include "stdio.h"

//PROGRAM NO - 9

int main()
{
	
	int x,a,h,i,range;
	

	
	char array[100];
	
	printf("***************\n NAME:NIKKITT MESILIY\n ROLL NO : 2162609 \n QUESTION NO : 9\n***************\n");
	
	printf("\nEnter the range for the array : \n");
	scanf("%d",&range);
	
	//Taking input
	printf("Enter a statement : \n");
	for(x=0;x<range;x++)
	{
	    scanf("%c",&array[x]);
	}
	
	
	 
	
	//assigning ascii values
	for(a=0;a<range;a++)
	{
	    if(array[a]>64&&array[a]<91)
		{
			array[a]=array[a]+32;
		}
		else if(array[a]>96 && array[a]<123)
		{
			array[a]=array[a]-32;
		}
		else if(array[a]>47 && array[a]<58)
		{
			array[a]=48;
		}
		else 
		{
			array[a]=42;
		}
		
	}
	
	printf("\n___________OUTPUT____________\n\n\n");
	
	//Printing Output
	for(int y=1;y<=range;y++)
	{
		printf("%c",array[y]);
	}
	
	
	return 0;
	
}
