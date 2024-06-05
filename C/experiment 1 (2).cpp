//GROCERY STORE MANAGEMENT

#include <stdio.h>
int main()
{ 

//decalring variables
int cid,age;
char ct,item;
float rate,quantity,bill,GST;

printf("PROJECT : GROCERY STORE MANAGEMENT \nNAME :  NIKKITT MESILIY\nROLL NO. : A_2162609\n");
printf("***********************\n");

//input
printf("Customer ID : ");
scanf("%d",&cid);

printf("Customer Age : ");
scanf("%d",&age);

printf("Customer Type (T or R ) :");
scanf(" %c",&ct);

printf("Item (R ,W OR S) : ");
scanf(" %c",&item);

printf("Item price : ");
scanf("%f",&rate);

printf("Item Quantity : ");
scanf("%f",&quantity);


//calculating bill and GST 
GST=((5.0/100.0)*(rate*quantity));
bill=(rate*quantity)+GST;


//printing bill
printf("\n________________________________\n");
printf("Customer ID=%d",cid);
printf("\nCustomer Age=%d",age);
printf("\nCustomer type=%c",ct);
printf("\nItem purchased=%c",item);
printf("\nRate of the item =%f",rate);
printf("\nQuantity of the item =%f",quantity);
printf("\nTotal bill=%f",bill);
printf("\nGST=%f",GST);
printf("\n________________________________");
}
