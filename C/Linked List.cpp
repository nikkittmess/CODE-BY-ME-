#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"


struct node
{
    int data;
    struct node *next;
};

struct node *head;


void print()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}

void insertfirst()
{
    struct node *ne=(struct node*) malloc(sizeof(struct node));
    printf("\nEnter Value : ");
    scanf("%d",&ne->data);
    
    ne->next=head;
    head=ne;
}

void insertlast()
{
	struct node* end=(struct node*) malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&end->data);
	struct node* current=head;
	while(current!=NULL)
	{
		if(current->next==NULL)
		{
			current->next=end;
			end->next=NULL;
		}
		current=current->next;
	}
}


void deletefirst()
{
	head=head->next;
	
}

void deletelast()
{
	struct node* ptr=head;
	struct node* ptr1=NULL;
	
	while(ptr!=NULL)
	{
		ptr1=ptr->next;
		if(ptr1->next==NULL)
		{
			free(ptr1);
			ptr->next=NULL;
		}
		ptr=ptr->next;
	}
}


int main()
{
	int n=0,choice;
	while(choice!=6)
	{
		printf("\n\n1.Insert first\n2.Insert last\n3.Delete first\n4.Delete last\n5.Show\n6.Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insertfirst();
			       break;
			case 2:insertlast();
			        break;
			case 3:deletefirst();
			       break;
			case 4:deletelast();
			       break;
			case 5:print();
			       break;
			case 6:exit(0);
		           break;
		    default:printf("\n\nWrong Choice");
		}
	}
	
}
