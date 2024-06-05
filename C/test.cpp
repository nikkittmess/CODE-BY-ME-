#include "stdio.h"

struct info
{
    char name[20];
    int regno;
    int marks;
}info[10];


int main()
{
	int i,avg,total;
	
	//Taking Input 
	for(i=0;i<=10;i++)
	{
		printf("\nEnter name of student %d : ",i);
		scanf("%d",&info[i].name);
		
		printf("\nEnter Reg No of student %d : ",i);
		scanf("%d",&info[i].regno);
		
		printf("\nEnter marks of student %d : ",i);
		scanf("%d",&info[i].marks);	
	}
	
	//Calculating Average Marks 
	for(i=0;i<=10;i++)
	{
		total=info[i].marks;
		avg=total/10;
	}
	
	
	//Data Output 
	
	for(i=0;i<=10;i++)
	{
		printf("Name : %s \nReg No : %d \nMarks : %d",info[i].name,info[i].regno,info[i].marks);
	}
	
	printf("Average marks of 10 students = %d",avg);
	
}
