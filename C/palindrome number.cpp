#include "stdio.h"
int main()
{
	int i,u=0,x,y,z;
	printf("Enter number to check if its a palindrome number : ");
	scanf("%d",&z);
	x=z;
	while(x>0)
	{
		i=x%10;
		u=(u*10)+i;
		x=x/10;	
	}
	if(z==u)
	{
		printf("Entered number %d is a palindrome number ",z);
	}
	else
	{
		printf("Entered number %d is not a palindrome number",z);
	}
	
	
}
