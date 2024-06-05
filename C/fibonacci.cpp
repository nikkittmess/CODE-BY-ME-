#include<stdio.h>
void fibonacci(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d  ", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int r,*f;

   printf("Enter range: ");
   scanf("%d", &r);
   f=&r;

   printf("The fibonacci series is: \n");

   fibonacci(*f);

   return 0;
}
