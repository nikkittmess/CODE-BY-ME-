#include <stdio.h>
int main()
{
//DECLARING VARIABLES
int i,num,oddSum,evenSum;

//TAKING INPUT FROM USER
printf("Enter the value of num \n");
scanf("%d",&num);

while(i<=num){
	i++;
	if(i%2==0)
	    {

        evenSum=evenSum+i;
    }
    else
	    {

        oddSum=oddSum+i;
	}

}

printf("Sum of all odd numbers are: %d",oddSum);
printf("\nSum of all even numbers are: %d",evenSum);
return 0;

}
