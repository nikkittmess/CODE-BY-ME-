#include "stdio.h"

struct details
{
	int cid,quantity;
	char item[100];
	float price;
	
}p[100];

int main()
{
	printf("DOMAIN : GROCERY STORE MANAGEMENT \n NAME : NIKKITT MESILIY \n ROLL NO : A_2162609\n\n");
	int n;
	printf("\nEnter number of customers : ");
	scanf("%d",&n);
	
	int*id[n],*quantity_[n];
	char *item_[n];
	float *price_[n];
	
	
	
	//TAKING INPUT FOR STRUCTURE VALUES 
	for(int i=0;i<n;i++)
	{
		
		
		
		
		printf("\n\nEnter customer ID : ");
		scanf("%d",&p[i].cid);
		
		printf("Enter Item purchased : ");
		scanf(" %s",&p[i].item);
		
		printf("Enter item price : ");
		scanf("%f",&p[i].price);
		
		printf("Enter item quantity : ");
		scanf("%d",&p[i].quantity);
		
		
		//ASSIGNING POINTERS
		id[i]=&p[i].cid;
		price_[i]=&p[i].price;
		quantity_[i]=&p[i].quantity;
	}
	
	
	//GIVING OUTPUT WITH CALCULATED FINAL BILL
	for(int x=0;x<n;x++)
	{
		printf("\n\n_________\n\nCustomer ID : %d\nItem purchased : %s\nItem price : %f\nItem quantity : %d\nFinal bill : %f\n\n_________\n",*id[x], p[x].item , *price_[x], *quantity_[x], (p[x].quantity * p[x].price));
		
	}
	
}
