#include "stdio.h"

int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);  
int main()
{   int x,y;
    int opt;
   	printf("Enter 2 numbers ");
   	scanf("%d %d",&x,&y);
   	printf("1-Addition\n2-Subtraction\n3-Multiplication\n5-Division\nEnter index number to perform operation: ");
   	scanf("%d",&opt);
   	switch(opt)
   	{
   		case 1:add(x,y);
   		        break;
   		case 2:sub(x,y);
   		        break;
   		case 3:mult(x,y);
   		        break;
   		case 4:div(x,y);
   		        break;
   		default:printf("Invalid option number");
   		        break;
	   }
   	return 0;
}
int add(int a,int b)
{
   	printf("Addition of %d and %d = %d",a,b,a+b);
}
int sub(int a,int b)
{
   	printf("Subtraction of %d and %d = %d",a,b,a-b);
}
int mult(int a,int b)
{
   	printf("Multiplication of %d and %d = %d",a,b,a*b);
}
int div(int a,int b)
{
   	printf("Division  of %d and %d = %d",a,b,a/b);
}
															                                                         
   

