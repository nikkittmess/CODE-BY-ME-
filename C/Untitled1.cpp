#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr,i,x,n,find=0;
	printf("enter the no of elemets :\n");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	printf("enter the elements :\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&ptr+i);
		
	}
	printf("enter the element to be found");
	scanf("%d",&x);
	for(i=0;i<n;++i)
	{
		if(ptr[i]==x)
		{
		
		find=1;
		break;
		}
	
}
if(find==1){
	printf("element found at %d",i);
}
else{
	printf("element not found");
}
return 0;
}
