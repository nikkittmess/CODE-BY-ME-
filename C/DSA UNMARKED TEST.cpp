#include "stdio.h"
#include "conio.h"

struct student
{
    char name[20];
    int regno;
    int marks;
    
}info[10];


int main()
{
	int i,total=0;
	float avg;
	
	
	//Taking Input 
	for(i=0;i<10;i++)
	{
		printf("\nEnter name of student %d : ",i);
		scanf("%s",&info[i].name);
		
		printf("\nEnter Reg No of student %d : ",i);
		scanf("%d",&info[i].regno);
		
		printf("\nEnter marks of student %d : ",i);
		scanf("%d",&info[i].marks);	
		
		printf("\n\n");
	}
	
	//Calculating Average Marks 
	for(i=0;i<10;i++)
	{
		total+=info[i].marks;
		avg=total/10;
	}
	
	
	//Viewing Data  
	for(i=0;i<10;i++)
	{
		printf("\n\nName : %s \nReg No : %d \nMarks : %d",info[i].name,info[i].regno,info[i].marks);
	}
	
	
	//Printing Output
	printf("\nAverage marks of 10 students = %f",avg);
	
}
