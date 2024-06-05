#include "stdio.h"

int add(int a[11],int b[11]);

int main()
{
	int nikkitt_array1[11];
	int nikkitt_array2[11];
	
	int d[10];
	
	int *nik1=&nikkitt_array1[11];
	int *nik2=&nikkitt_array2[11];
	printf("Enter first array elements : ");
	
	for(int x=0;x<=10;x++)
	{
		scanf("%d",&nikkitt_array1[x]);
	}
	printf("Enter Second array elements : ");
	
	for(int g=0;g<=10;g++)
	{
		scanf("%d",&nikkitt_array2[g]);
	}
	
	//for(int h=0;h<=10;h++)
	//{
	d=add(nikkitt_array1[h],nikkitt_array2[h]);
	//}
}

int add(int a[],int b[])
{
	int c[10];
	
	for(int i=0;i<=10;i++)
	{
		c[i]=a[i]+b[i];
		
		return c[i];
	
	}
	
}
