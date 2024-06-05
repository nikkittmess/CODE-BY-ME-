//GROCERY STORE MANAGEMENT
/*Discount for regular customers - 10% 
Discount if quantity of item exceeds  10kg - 5%*/

#include <stdio.h>

int main()
{ 

//DECLARING VARIABLES
int cid,age,opt;
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

 
//IF LOOP TO INITIALISE RATE
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

//CALCULATING BILL
bill=rate*quantity;

//IF LOOP TO CALCULATE DISC2
if(quantity>10)
{
    disc2=(5.0/100.0)*bill;
}


//IF LOOP TO CALCULATE DISC
if(ct=='r'||ct=='R')
{
	disc=(10.0/100.0)*bill;
}


//CALCULATING GST AND FINAL BILL
GST=((5.0/100.0)*bill);
fbill=bill+GST-disc2-disc;



printf("Please enter the index number to view \n1.Customer details \n2.Discount calculation\n3.Bill\n4.Exit \n");
scanf("%d",&opt);
do{
	switch (opt)
{
        case 1:
            printf("Customer ID=%d",cid);
            printf("\nCustomer Age=%d",age);
            printf("\nCustomer type=%c",ct);
            opt=4;
            break;
    
        case 2:
            printf("\nDiscount available for Regular customers - 10%\nDiscount available if quantity of item is more than 10 kg - 5%\n");
            opt=4;
            break;
    
        case 3:
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
            opt=4;
            break;
        
        case 4:
    	    printf("Exiting.......");
    	    break;
        default:
            printf("Invalid Option ");
    
}
}while(opt!=4);


}
