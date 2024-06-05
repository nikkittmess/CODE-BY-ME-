#include <stdio.h>
#include "conio.h"
#include"stdlib.h"

struct record
{
	int regno;
	char name[20];
	int marks;
}info[10];

int main()
{
    int i,n,search,*regno,*marks;
    char *name;
    
    printf("Enter number of students: ");
    scanf("%d",&n);
    
    regno=(int*)malloc(n* 4);
    name=(char*)malloc(n* sizeof(char));
    marks=(int*)malloc(n* 4);
    
    regno=&info.regno;
    name=&info.name;
    marks=&info.marks;
    
    for(i=0;i<n;i++)
    {
    	printf("\nEnter Name: ");
    	scanf("%s",&*name[i]);
    	
    	printf("\nEnter Reg No: ");
    	scanf("%d",&*regno[i]);
    	
    	printf("\nEnter Marks: ");
    	scanf("%d",&*marks[i].);
	}
	
	printf("\n\n\nEnter Reg No of student : ");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if(*marks[i].regno==search)
		{
			printf("\n\nName = %s",*name[i].name);
			printf("\n\nReg No = %d",*regno[i].regno);
			printf("\n\nMarks = %d",*marks[i].marks);
			
		}
	}
}
