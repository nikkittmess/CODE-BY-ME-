#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	
	char sign[100],num[100],variable[100];
	char arr[100];
	int i=0,spaces,length;
	printf("ENTER A STATEMENT : ");
	scanf("%s",&arr[100]);
	
	length=strlen(arr);
	
	printf("%s",arr);
	
	for(i=0;i<=length;i++)
	{
		if (arr[i]>=65 && arr[i]<=90 || arr[i]>=97 && arr[i]<=122)
		{
			printf("%c is a variable \n",arr[i]);
		}
		
		else if(arr[i]>=48 && arr[i]<=57)
		{
			printf("%c is a number \n",arr[i]);
		}
		
		else if (arr[i]>=33 && arr[i]<=47 || arr[i]>=58 && arr[i]<=64 || arr[i]>=123 && arr[i]<=126)
		{
			printf("%c is an operator \n",arr[i]);
		}
		
		
	    
	}
	
	
/*	for(i=0;i<5;i++)
	{
		printf("\nVARIABLES \t SIGNS \t NUMBERS\n");
		printf("%c \t %c \t %c\n",variable[i],sign[i],num[i]);
	}*/
	
	
}
