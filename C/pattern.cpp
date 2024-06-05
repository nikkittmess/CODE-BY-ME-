#include "stdio.h"
int main()
{
	for(int i=0;i<10;i++)
	{
		printf(" ");
		for(int x=10;x>i;x--)
		{
			printf("%d  ",x);
		}
		printf("\n");
	}
}

