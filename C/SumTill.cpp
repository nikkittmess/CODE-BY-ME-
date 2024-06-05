#include <stdio.h>
 int sum(int a);
 
 int sum(int a)
 {
 	int sum=0,value;
 	for(int i=0;i<=a;i++)
 	{
 		sum+=i;
	}
	return sum;
 }
 
 
int main()
{
  int n,*p,s;
  printf("Enter number till sum has to be calculated \n");
  scanf("%d",&n);
  p=&n;
  
  s=sum(*p);
  printf("Sum till %d = %d",n,s);
 
  
 
  return 0;
}
