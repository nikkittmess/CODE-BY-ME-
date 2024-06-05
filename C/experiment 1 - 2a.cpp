//GROCERY STORE MANAGEMENT
/*Discount for regular customers - 10% 
Discount if quantity of item exceeds  10kg - 5%*/

#include <stdio.h>

int main()
{ 

//DECLARING VARIABLES
int cid,age;
char ct,item;
float rate,quantity,bill,GST,disc,disc2,fbill;

printf("PROJECT : GROCERY STORE MANAGEMENT \nNAME :  NIKKITT MESILIY\nROLL NO. : A_2162609\n");
printf("***********************\n");
 
 
 
//INPUT FROM USER
printf("Customer ID : ");
scanf("%d",&cid);

printf("Customer Age : ");
scanf("%d",&age);

printf("Customer Type (T-temporary or R-regular ) :");
scanf(" %c",&ct);

printf("Item (R-rice ,W-wheat OR S-sugar ) : ");
scanf(" %c",&item);

printf("Item Quantity : ");
scanf("%f",&quantity);

 
//IF LOOP #1
if(item=='r'||item=='R'){
	rate=60;
}
else if(item=='w'||item=='W'){
	rate=65;
}
else if(item=='s'||item=='S'){
	rate=25;
}
else{
	printf("invalid item");
}

//CALCULATING BILL , TO USE IN FURTHER CALCULATIONS
bill=rate*quantity;

//IF LOOP TO CALCULATE DISC2
if(quantity>10)
{
    disc2=(5.0/100.0)*bill;
}


//IF LOOP #3
if(ct=='r'||ct=='R'){
	disc=(10.0/100.0)*bill;
}



//CALCULATING GST AND FINAL BILL
GST=((5.0/100.0)*bill);
fbill=bill+GST-disc2-disc;


//printing bill
printf("\n________________________________________________\n");
printf("                       BILL                       \n");
printf("Customer ID=%d",cid);
printf("\nCustomer Age=%d",age);
printf("\nCustomer type=%c",ct);
printf("\nItem purchased=%c",item);
printf("\nRate of the item =%f",rate);
printf("\nQuantity of the item =%f kg",quantity);
printf("\nTotal bill=%f",fbill);
printf("\nGST=%f",GST);
printf("\nDISCOUNT=%f",disc+disc2);
printf("\n________________________________________________");










}
