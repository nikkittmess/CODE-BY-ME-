#include "stdio.h"

int main ()
{
	int n,*a;
	
    printf("DOMAIN : GROCERY STORE MANAGEMENT \n NAME : NIKKITT MESILIY \n ROLL NO : 2162609\n\n");
    printf("ENter number of customers : ");
    scanf("%d",&n);
    
    a=&n;
    
    int cid[*a],price[*a],quan[*a],bill[*a];
    char item[*a];
    
    
    for (int i=0;i<n;i++)
    
    {   
	    printf("\n Enter Customer id : ");
    	scanf("%d",&cid[i]);
    	printf("\n Enter Item : ");
    	scanf(" %c",&item[i]);
    	printf("\n Enter price of item : "); 
		scanf("%d",&price[i]);
    	printf("\n Enter quantity purchased ");
		scanf("%d",&quan[i]);
	}
	
	//CALCUALTING BILL
	for(int y=0;y<n;y++)
	{
		bill[y]=price[y]*quan[y];
	}
	
	for(int j=0;j<n;j++)
	{
		printf("\n_________________________\n Customer ID = %d \n Item = %c \n Price = %d \n Quantity = %d \n Bill = %d \n\n_________________________\n\n",cid[j],item[j],price[j],quan[j],bill[j]);
	}
	
}
