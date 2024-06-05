#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int data;
	int key;
	struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void printlist()
{
	struct node * ptr =head;
	printf ("\n [");
	while (ptr != NULL)
	{
		printf ("(%d, %d)", ptr ->key, ptr->data);
		ptr = ptr->next;
		printf ("]");
	}
}
void insertfirst (int key, int data)
{
	struct node *link= (struct node*) malloc (sizeof (struct node));
	if(head==NULL)
	{
		link->key=key;
		link->data=data;
		link->next=head;
		head=link;
	}
	else
	{
		link->key=key;
		link->data=data;
		link->next=head;
		head=link;
	}
	
	
}
struct node *deletefirst()
{
	if(head==NULL)
	{
		printf("\nEmpty List");
	}
	else
	{
		struct node *templink=head;
    	head=head->next;
    	return templink;
	}
    
}

struct node *find (int key)
{
    struct node *current=head;
    struct node *previous;
    int count=0;
    if(head==NULL)
    {
        return NULL;
    }

    else
    {
        if(current->key==key)
        {
        	printf("Node found at %d\n",count);
        	return(current);
		}
		else
		{
			count=+1;
			current=current->next;
		}
    }  
	
	  

    
}
void check ()
{
if(head==NULL)
{
printf ("The list is empty\n");
}
else
printf ("list is not empty\n");
}
int main ()
{
	int ch, da, k, x;
	struct node *templink;
	struct node *foundlink;
	do
	{
		printf("\nNAME : NIKKITT MESILIY \nROLL NO : 2162609\n\n");
		printf ("\n1. Insert first\n2.Search an element\n3.Check if list is empty\n4.Delete first\n5.Display or print\n6.Exit");
		printf ("\n Enter your choice: ");
		scanf ("%d", & ch);
		switch(ch)
		{
			case 1:
				printf ("\n Enter the value of data: ");
				scanf ("%d", &da);
				printf ("\n Enter the value of key: ");
				scanf ("%d", &k);
				insertfirst (k, da);
				printlist ();
				break;
			case 2:
			    printf ("Enter the searched key item\n");
                scanf ("%d", &x);
                templink=find(x);
                printf ("key value is %d and data value is %d\n search successfull",templink->key,templink->data);
                break;	
			case 3:
				check ();
				break;
			case 4:
			    templink =deletefirst();
				printf ("\n Deleted value: ");
				printf ("(%d, %d)",templink->key, templink->data);
				break;
			case 5:
				printf ("The list\n");
                printlist ();
                break;
            case 6:
                exit (0);
                break;
				default:
				printf ("\n Invalid Choice");
		}
	}
while (ch!= 6);
return 0;
}

