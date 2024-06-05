#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 100
void arrayposition(int p,int q);
int main()
{
	int a[N],i,pos,n,search,c=0,it=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("Enter the element you want to search\n");
	scanf("%d",&search);
	printf("Displaying the elements of the array.......\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	
	}
	
	 
	
	for(int i=0;i<n;i++)	
	{
		if(search==a[i])
		{
			c++;
			arrayposition(i,c);
			it++;
			
		 
		}
		 
	}
	 	



 
	 
}
void arrayposition(int p,int q)
{
	int *ptr= (int *)malloc(sizeof(int));
	*(ptr+q)=p;
	printf("\nposition --->%d\t",*(ptr+q));
	 
	
}

