#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *nums,i,n,rez=0;
    
    
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    
    nums=(int*) malloc(n*4);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter number: ");
        scanf("%d",&nums[i]);
    }
    
    for(i=0;i<=(n*n);i++)
    {
        if(nums[i]==nums[i++])
        {
            rez=1;
        }
    }
    
    if(rez==1)
    {
        printf("\ntrue");
    }
    else
        printf("\nfalse");
    
    return 0;
}
