#include "stdio.h"
int main()
{
  int x,y;
  printf("Enter number of rows and columns ");
  scanf("%d %d",&x,&y);
  int a[x][y];
  for(int i=0;i<x;i++)
  {
  	for(int u=0;u<y;u++)
  	{
  		printf("\a Enter  numbers to be assigned ");
  		scanf("%d",&a[i][u]);
	  }
  }
  for(int v=0;v<x;v++)
  {
  	for(int c=0;c<y;c++)
  	{
  		printf("\a %d",a[v][c]);
  		
	  }
	  printf("\n");
  }
  
  return 0;
  
  
}
