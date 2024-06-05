#include "stdio.h"
int main()
{
	int i,u,x,y,input;
	printf("Enter a number ");
	scanf("%d",&input);
	x=input;
	while(x>0)
	{
		i=x%10;
		u+=i*i*i;
		x=x/10;
	}
	if(u==input)
	{
		printf("Number is an armstrong number");
	}
	else
	{
		printf("Number is not armstrong number");
	}
}
