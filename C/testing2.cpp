#include "stdio.h"
#include "stdlib.h"

int main()
{
    int arr[5]={10,20,30,40,50},*p,b=100,*c;
	
	p=arr;
	c=&b;
	printf("%d",*c-*(p+2));     
    
}
