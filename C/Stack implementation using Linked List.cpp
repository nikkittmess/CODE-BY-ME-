#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"


struct node
{
    int data;
    struct node *next;
};

struct node* top;
struct node* rear;


void print()
{
    struct node *ptr=top;
    if(ptr!=NULL)
    {
    	printf("Underflow");	
	}
    else
    {
    	while(ptr!=NULL)
    	{
    		printf("\n%d",ptr->data);
    		ptr=ptr->next;
		} 
    }
}

void push()
{
	struct node* newtop=(struct node*) malloc(sizeof(struct node));
	printf("\nEnter the number youd like to push : ");
	scanf("%d",&newtop->data);
	
	newtop->next=top;
	top=newtop;
}

void pop()
{
	int ptr;
	
	if(top==NULL)
	{
		printf("\nUnderflow");
	}
	else
	{
		ptr=top->data;
		top=top->next;
		printf("\npopped element =%d",ptr);
	}
	
	
}

int main()
{
	int n=0,choice;
	while(n!=4)
	{
		printf("\n\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
			       break;
			case 2:pop();
			        break;
			case 3:print();
			       break;
			case 4:exit(0);
		           break;
		    default:printf("\n\nWrong Choice");
		}
	}
	
}
