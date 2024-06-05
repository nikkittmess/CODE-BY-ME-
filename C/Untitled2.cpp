#include<stdio.h>
#include<stdlib.h>
int main()
{
	int temp,n,first,last,middle,c,i,j,search,array[100];
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(c=0;c<n;c++)
	 {
	 	scanf("%d",&		array[c]);
	 }
	for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
		
	 	if(array[i]>array[j]){
	
	 	temp=array[i];
	 	array[i]=array[j];
	 	array[j]=temp;
	 }
}
}
    printf("enter the elements to be searhed");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {if(array[middle]<search)
    first=middle+1;

else if(array[middle]==search){
	printf("element found at %d",search,middle+1);	
	break;
}
else
last=middle-1;
middle= (first+last)/2;
};
if(first>last){

printf("element not found at %d",search);

}
return 0;
}
