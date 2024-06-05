#include "stdio.h"
  
int main()
{
	printf(" NAME : ALEETA TIMOTHY\n REG NO : 2162616\n\n");
	
    int a[20],i,x,n,find=0;
    printf("How many elements would you like to have? : ");
    scanf("%d",&n);
     
    printf("Enter array elements : \n");
    for(i=0;i<n;++i)
    {
	    scanf("%d",&a[i]);
	}
        
     
    printf("\nEnter element to search for : ");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
    {
	    if(a[i]==x)
	    {
	    	find=1;
		    break;
		}
	}   
            
    if(find==1)
    {
    	printf("\nElement found at index %d",i);
	}
    else
    {
    	printf("\nElement not found");
	}  
  
    return 0;
}
