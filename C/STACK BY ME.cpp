#include "stdio.h"
#include "stdlib.h"

//DECLARING TOP AND ARRAY WHERE DATA WILL BE STORED
int top=-1,*stack;

//DECLARING FUNCTIONS FOR NECESSARY OPERATIONS 
void push(int s);
void pop();
void show(int si);


int main()
{
	int n,size;
	printf("\nENTER SIZE OF STACK : ");
	scanf("%d",&size);
	
	//ALLOCATING DYNAMIC MEMORY FOR STACK 
	stack=(int*) malloc(size*4);
	
	printf("\n1.PUSH\n2.POP\n3.SHOW\n4.EXIT\n\nEnter option number : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: push(size);
		        break;
		case 2: pop();
		        break;
		case 3: show(size);
		        break;
		case 4: exit(0);
		        break;
		default: printf("\nINVALID OPTION\n");
	}
	return(0);

}


void push(int s)
{
	int x;
	if(top>=s)
	printf("\nENTER ELEMENT TO BE INSERTED : ");
	scanf("%d",&x);
	*(stack+top)=x;
	top=top+1;
}

void pop()
{
	if(top=-1)
	{
		printf("\nSTACK UNDERFLOW\n");
	}
	else
	{
		printf("\nELEMENT POPPED : %d",stack[top]);
	    top=top-1;
	}
	
	
}

void show (int si)
{
	for(int i=0;i<=size;i++)
}

