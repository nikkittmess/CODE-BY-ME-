#include "stdio.h"

float discount_calc(float q1,char ct1,float bill_1);           //TO CALCULATE DISCOUNT     RETURN TYPE- FLOAT 
float grocerydetails(float q2,char ct2,float bill_2);          //TO CALCULATE FINAL BILL   RETURN TYPE- FLOAT
float revenue(float rev);                                      //TO CALCULATE REVENUE      RETURN TYPE- FLOAT

int main()
{
	//DECLARING VARIABLES
    int cid,age,opt,u,opt2;
    char ct,t;
    float rate,quantity,disc,fbill,bill,revenue_;
    int a[3]={1,2,3};
 
    //PRINTING PROJECT INFO
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
    
    
    //CALCULATING BILL(WITHOUT DISC AND GST) SO THAT OTHER FUNCTIONS CAN USE 
    
    //if loop to find rate
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
    
    
    bill=rate*quantity;
    
    
    //CALLING FUNCTIONS AND ASSIGNING THEM 
    disc=discount_calc(quantity,ct,bill);
    fbill=grocerydetails(quantity,ct,bill);
    revenue_=revenue(fbill);
    
    
    //ASKING USER FOR INPUT TO SHOW OUTPUT 
    printf("Please enter the index number to view \n1.Customer details \n2.Discount calculation \n3.Bill \n4.View Revenue \n5.Exit \n");
    scanf("%d",&opt);
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
            printf("\nGST=%f",bill*0.05);
            printf("\nDISCOUNT=%f",disc);
            printf("\n________________________________________________");
            opt=4;
            break;

        case 4:
    	    printf("Revenue = %f",revenue_);
    	    break;
    	    
    	case 5:
    		printf("Exiting...........");
    		break;
        default:
            printf("Invalid Option ");

    }
    

    //ASKING THE USER IF HE WANTS TO GIVE MORE INPUTS
    printf("\nDO YOU WANT TO CONTINUE THE PROCESS  \n 1-CONTINUE \n 2-EXIT  ");
    scanf("%d",&opt2);
    if(opt2==1)
    { 
	    goto Label;
    }
    
    
    
   //MAIN FUNCTION ENDS..............................  
}

float discount_calc(float q1,char ct1,float bill_1)
{
	
	//INTIALISING VARIABLES FOR THIS FUNC
	float disc=0,disc2=0,disc_final;

	
	//IF LOOP TO CALCULATE DISCOUNT
    if(q1>10.0)
    {
	    disc=(5.0/100.0)*bill_1;
    }
    
	if(ct1=='r'||ct1=='R')
    {
	    disc2=(10.0/100.0)*bill_1;
    }
    
    disc_final=disc+disc2;
    
    
    
    return disc_final;
    
}



float grocerydetails(float q2,char ct2,float bill_2)
{
	//INTIALISING VARIABLES FOR THIS FUNC
	float final_bill,disc_f,GST;
	
	
	//ARITHMETIC OPERATIONS FOR GST , FINAL BILL
	disc_f=discount_calc(q2,ct2,bill_2);     //assigning discount_calc retun value to disc_f
	GST=0.05*bill_2;
	final_bill=bill_2+GST-disc_f;
	

	return final_bill;
	

}


float revenue(float rev)
{
	//INITIALISING VARIABLES FOR THI FUNC
	float re=0;
	
	//ADDING FINAL BILL AMOUNTS TO CALC REVENUE
	re+=rev;
	
	
	return re;
}

