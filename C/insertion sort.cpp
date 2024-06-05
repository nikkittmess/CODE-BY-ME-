#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int arr[10],i,j,key;
	printf("Enter 10 elements : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<10;i++)
	{
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		key=arr[j+1];
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
