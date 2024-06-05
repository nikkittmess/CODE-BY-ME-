#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int i,j,temp,search,arr[10],mid,last, found;
	
	printf("Enter 10 numbers : ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i>arr[j]])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	
	printf("\nEnter element to search : ");
	scanf("%d",&search);
	
	
	mid=(int)10/2;
	last=9;
	
	for(i=0;i<10;i++)
	{
		if(search==arr[mid])
		{
			found=1;
		}
		else if(search>arr[mid])
		{
			mid=(int)(mid+last)/2;
		}
		else
		{
			mid=mid/2;
		}
	}
	
	if(found==1)
	{
		printf("\nElement found at %d",mid);
	}
	else
	{
		printf("\nElement not found");
	}
}
