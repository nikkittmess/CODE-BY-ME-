#include "stdio.h"
int main()
{
  int opt,n,i=1,g,f,r,s=0;
  printf("REG NO : 2162609 \n NAME : NIKKITT MESILIY");
  printf("\nENTER A NUMBER : ");
  scanf("%d",&n);
  g=n;
  //DSIPLAYING OPTIONS
  printf("ENTER OPTION NUMBER \n 1.FIND IF A NUMBER IS A PERFECT NUMBER \n 2.FIND IF A NUMBER IS A STRONG NUMBER ");
  scanf("%d",&opt);


  if(opt==1)
  {
	  while(i<=n/2)
	  {
	      if(n % i == 0)
	      {
	          s = s + i;
		  }
		  i++;
	  }
	  if(s==n)
      {
		  printf("%d is a perfect number.",n);
      }
	  else
	  {
	      printf("%d is not a perfect number",n);
	  }
  }
  else if(opt==2)
  {
	  while(n>0){
		  f = 1;
		  r = n%10;

		  for(int i=1;i<=r;i++){
      		  f=f*i;
  		  }

		  s = s + f;
		  n = n/10;

	  }

	if(g==s)
	{
		printf("\n%d is a strong number.",g);
	  }
	else
		printf("\n%d is not a strong number.",g);
}
