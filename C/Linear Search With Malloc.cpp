#include "stdio.h"
#include "stdlib.h"

int main()
{
	printf(" NAME : ALEETA TIMOTHY \n REG NO: 2162616\n\n");
	
    int *ptr,i,x,n,find=0;
    printf("How many elements would you like to have? : ");
    scanf("%d",&n);
     
    ptr = (int*)malloc(n * sizeof(int));
     
    printf("Enter array elements : \n");
    for(i=0;i<n;++i)
    {
	    scanf("%d",&ptr+i);
	}
        
     
    printf("\nEnter element to search for : ");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
    {
	    if(*ptr+i==x)
	    {
	    	find=1;
		    break;
		}
	}

    if(find==1)
    {
    	printf("\nElement found at position %d",i+1);
	}
    else
    {
    	printf("\nElement not found");
	}
  
    return 0;
}
