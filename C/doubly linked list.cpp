#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insert ();
void delet ();
void display ();
int main ()
   {
        int choice =0;
        while (choice!= 4)
        { 
            printf ("\nNAME:NIKKITT \nROLL NO:2162609");
            printf ("\n1. Insert \n2.delete\n3.display\n4.EXIT\n");
            printf ("\n Enter your choice: ");
            scanf ("\n %d", &choice);
            switch(choice)
            {
                case 1:
                        insert ();
                        break;
                case 2:
                        delet();
                        break;
                case 3:
                        display ();
                        break;
                case 4:
                        exit (0);
                        break;
                default:
                        printf ("\n Enter valid choice.");
            }
        }
    }
void insert ()
    {
        struct node *ptr;
        int item;
        ptr = (struct node *) malloc (sizeof (struct node));
        if (ptr == NULL)
        {
            printf("\n OVERFLOW");
        }
        else
        {
            printf ("\n Enter data:\n");
            scanf ("%d", &item);

if(head==NULL)
{
ptr->next = NULL;
ptr->prev=NULL;
ptr->data=item;
head=ptr;
}
else
{
ptr->data=item;
ptr->prev=NULL;
ptr->next = head;
head->prev=ptr;
head=ptr;
}
printf ("\n NODE INSERTED\n");
}
}
void delet ()
{
struct node *ptr;
if (head == NULL)
{
printf("\n UNDERFLOW");
}
else if(head->next == NULL)
{
head = NULL;
free(head);
printf ("\n NODE DELETED\n");
}
else
{
ptr = head;
head = head -> next;
head -> prev = NULL;
free(ptr);
printf ("\n NODE DELETED\n");
}
}
void display ()
{
struct node *ptr;
printf ("\n The elements are\n");
ptr = head;
while (ptr != NULL)
{
printf ("%d\n", ptr->data);
ptr=ptr->next;
}
}

