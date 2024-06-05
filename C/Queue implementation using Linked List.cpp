#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

struct node
{
    int data;
    struct node *next;
};

struct node* head;
struct node* rear;

void print()
{
	struct node *ptr=head;
	if(ptr==NULL)
	{
		printf("Empty Queue\n");
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

void enqueue()
{
	struct node* newrear;
	struct node* current=head;
	printf("Enter a new element :");
	scanf("%d",&newrear->data);
	
	if(rear!=NULL)
	{
		newrear->next=rear;
		rear=newrear;
	}
	else
	{
		head=newrear;
		rear=newrear;
	}
	free(newrear);
	
}

void dequeue()
{
	if(head==NULL)
	{
		printf("\nEmpty Queue");
	}
	else
	{
		printf("Dequeued element = %d",head->data);
		head=head->next;
	}
}

int main()
{
	int n=0,choice;
	while(n!=4)
	{
		printf("\n\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			        break;
			case 3:print();
			       break;
			case 4:exit(0);
		           break;
		    default:printf("\n\nWrong Choice");
		}
	}
	
}
