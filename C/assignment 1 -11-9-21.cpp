// NAME : NIKKITT MESILIY 

/*1) To check whether the entered number is positive or negative
  2) To check whether the entered number is even or odd.
  3) To find the largest of two numbers*/

#include<stdio.h>
int main ()
{
	
//DECLARING VARIABLES
int a,b;

//TAKING INPUT FROM USER	
printf("\n ENTER A NUMBER ");
scanf("%D",&a);


//CHECKING TO SEE IF THE NUMBER IS POSITIVE OR NEGATIVE USING IF ELSE LADDER
if(a>0)
{
	printf(" %d IS A POSITIVE NUMBER \n",a);
	
}
else if (a<0)
{
	printf(" %d IS A NEGATIVE NUMBER \n",a);
}
else{
	printf("\n %d ==0 ",a);
}



//TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD 
if(a%2==0)
{
	printf("%d IS AN EVEN NUMBER \n",a);
}
else
{
	printf("%d IS AN ODD NUMBER \n",a);
}



//TO FIND THE LARGEST OF 2 NUMBERS 
printf("ENTER ANOTHER NUMBER\n");
scanf("%d",&b);

if(a>b)
{
	printf("\n %d > %d \n ",a,b);
}
else if(b>a)
{
	printf("%d > %d \n",b,a);
}
else
{
	printf("%d = %d \n",a,b);
}

}

