#include "stdio.h"

int main ()
{
	float l,b,h,c,cost;
	printf("Enter length = ");
	scanf("%f",&l);
	printf("Enter breadth = ");
	scanf("%f",&b);
	printf("Enter height = ");
	scanf("%f",&h);
	
	printf("cost per square feet");
	scanf("%f",&cost);
	
	c=(2*((l*b)+ (b*h) + (l*h)))*cost;
	printf("%f \n %f \n %f \n %f",l,b,h,c);
	
	
}
