#include "stdio.h"
int main ()
{
	int x,y,input;
	printf("enter number");
	scanf("%d",&input);
	
	for(int i=1;i<=10;i++)
	{
		y=input*i;
		printf("%d * %d = %d\n",input,i,y);
	}
}
