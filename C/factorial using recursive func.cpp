 #include "stdio.h"
int factorial(int n)
{
	int fact=1;//base case value
    if (n>1)  //RECURSIVE CASE - DECOMPSOTION
    {
    	fact=factorial(n-1)*n;   //COMPOSITION
	}
	printf("Factorial of  %d",fact);
}
int main()
{
	int inp,a;
	printf("Enter a number : ");
	scanf("%d",&inp);
	
	factorial(inp);
	
	
	
	
	return 0;
}
