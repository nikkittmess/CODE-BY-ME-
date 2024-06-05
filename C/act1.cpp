#include <stdio.h>

int main()
{
//DECLARING VARIABLES
int i=1,num,oddsum=0,evensum=0;

//TAKING INPUT FROM USER
printf("Enter desired number");
scanf("%d",&num);

//USING WHILE LOOP
while(i<=num)
{

	if(i%2==0)
	{
	    evensum=evensum+i;
	}
	else
	    oddsum=oddsum+i;

    i++;
}
printf("sum of even numbers= %d",evensum);
printf("\nsum of odd numbers = %d",oddsum);
}
