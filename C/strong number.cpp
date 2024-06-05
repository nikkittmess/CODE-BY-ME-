#include<stdio.h>
int main(){
	int number,num, s, sum = 0, fact=1;

	printf("Enter a number: ");
	scanf("%d", &number);
	num = number;

	do{
		fact = 1;
		s = number%10;

		for(int i=1;i<=s;i++){
      		fact=fact*i;
  		}

		sum = sum + fact;
		number = number/10;

	}while(number>0);

	if(num==sum)
		printf("\n%d is a strong number.",num);
	else
		printf("\n%d is a not a strong number.",num);
}
