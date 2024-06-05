#include "stdio.h"
int main()
{
	int i,u,x,y;
	printf("Enter a number ");
	scanf("%d",&y);
	x=y;
	while(x>0)
	{
		i=x%10;
		u+=i;
		x=x/10;
	}
	printf("sum of digits = %d",u);
   	
}

