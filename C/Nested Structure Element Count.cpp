#include <stdio.h>   
#include <conio.h> 

struct address
{
    int houseno;
    char area[100];
    char city[50];
    char state[20];
    int pin;
    
};

struct student 
{
	char name[10];
	int rollno;
	int age;
	int marks;
	struct address add;
 }st[10];
 
 
 
int main()  
{
	int n,i,num,count=0;
	
	printf(" NAME : NIKKITT MESILIY\n REG NO : 2162609\n\n");


	printf("Enter number of entries : \t");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
    {
    	
		printf("\n Enter name : ");
		scanf("%s",&st[i].name);
		
		printf("\n Enter roll no : ");
		scanf("%d",&st[i].rollno);
		
		printf("\n Enter age : ");
		scanf("%d",&st[i].age);
		
		printf("\n Enter marks : ");
		scanf("%d",&st[i].marks);
		
		printf("\n Enter House Number : ");
		scanf("%d",&st[i].add.houseno);
		
		printf("\n Enter House area : ");
		scanf("%s",&st[i].add.area);
		
		printf("\n Enter city : ");
		scanf("%s",&st[i].add.city);
		
		printf("\n Enter state : ");
		scanf("%s",&st[i].add.state);
		
		printf("\n Enter pin code : ");
		scanf("%d",&st[i].add.pin);
		
	}
	
	
	for(i=0;i<n;i++)
	{
	
	    {
	    	if(st[i].name!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		{
			if(st[i].rollno!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		
		{
			if(st[i].age!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		
		{
			if(st[i].marks!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		
		{
		    if(st[i].rollno!=NULL)
	        {
	    	    count+=1;
		    }
			
		}
		
		{
			if(st[i].add.area!=NULL)
	        {
	    	    count+=1;
		    }
		}
	
		
		{
			if(st[i].add.city!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		{
			if(st[i].add.houseno!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		{
			if(st[i].add.pin!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
		
		{
			if(st[i].add.state!=NULL)
	        {
	    	    count+=1;
		    }
		}
		
}
	printf("\n\nNumber of elements = %d",count-1);
    
}  


