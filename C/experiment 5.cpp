//GROCERY STORE MANAGEMENT
/*Discount for regular customers - 10%
Discount if quantity of item exceeds  10kg - 5%*/

#include <stdio.h>

int main()
{

//DECLARING VARIABLES
int cid,age,opt,u,opt2;
char ct,t;
float rate,quantity,bill,GST,disc,disc2,fbill;
int a[3]={1,2,3};

printf("PROJECT : GROCERY STORE MANAGEMENT \nNAME :  NIKKITT MESILIY\nROLL NO. : A_2162609\n");
printf("***********************\n");
 
Label:

//INPUT FROM USER
printf("Customer ID : ");
scanf("%d",&cid);

printf("Customer Age : ");
scanf("%d",&age);

printf("Customer Type (T-temporary or R-regular ) :");
scanf(" %c",&ct);

printf("Grocery number (1:rice , 2:wheat  , 3:sugar): ");
scanf(" %d",&u);

printf("Item Quantity : ");
scanf("%f",&quantity);


//IF LOOP TO INITIALISE RATE
if(u=a[1])
{
    t='R';
    rate=60;;

}
else if(u=a[2])
{
	t='W';
	rate=65;
}
else if(u=a[3])
{
	t='S';
	rate=25;
}
else
{
	printf("INVALID GROCERY NUMBER..........");

}

//CALCULATING BILL
bill=rate*quantity;

//IF LOOP TO CALCULATE DISC2
if(quantity>10.0)
{
    disc2=(5.0/100.0)*bill;
}
else
{
	disc2=0;
}


//IF LOOP TO CALCULATE DISC
if(ct=='r'||ct=='R')
{
	disc=(10.0/100.0)*bill;
}
else
{
	disc=0;
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
            printf("\nItem purchased=%c",t);
            printf("\nRate of the item =%f",rate);
            printf("\nQuantity of the item =%f kg",quantity);
            printf("\nTotal bill=%f",fbill);
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

printf("DO YOU WANT TO CONTINUE THE PROCESS  \n 1-CONTINUE \n 2-EXIT  ");
scanf("%d",&opt2);
if(opt2==1)
{
	goto Label;
}

}
