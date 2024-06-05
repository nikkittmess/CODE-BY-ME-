#include "stdio.h"
int main()
{
	int x,y;
	printf("enter number of rows and columns");
	scanf("%d %d",&x,&y);
	int a[x][y],b[x][y],c[x][y];
	
	printf("\aenter first array elements in order ");
	for(int i=0;i<x;i++)
	{
		for(int u=0;u<y;u++)
		{
			scanf("%d",&a[i][u]);
		}
	}
	
	printf("\anter second array elements in order ");
	for(int i=0;i<x;i++)
	{
		for(int u=0;u<y;u++)
		{
			scanf("%d",&b[i][u]);
		}
	}
	
	for (int l=0;l<x;l++)
	{
		for(int m=0;m<y;m++)
		{
			c[l][m]=0;
			for(int k=0;k<y;k++)
			{
				c[l][m]=a[l][k]*b[k][m];
			}
		}
	}
	printf("Output : \n");
	for(int i=0;i<x;i++)
	{
		for(int z=0;z<y;z++)
		{
			printf("%d\t",c[i][z]);
		}
		printf("\n");
	}
		
}

