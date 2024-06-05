#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data, key;
struct node *next;
};
struct node *head;
void insert();
void delet();
void display ();
void insert_spec ();
int main ()
{
int choice;
printf ("\nNAME : NIKKITT \n ROLL NO: 2162609");
printf ("\n1.Insert\n2.Remove\n3.Display\n4.Insert_Spec \n5.Exit\n");
do
{
printf ("\n Enter the choice of operation:");
scanf ("%d", &choice);
switch(choice)
{
case 1: 
insert ();
break;
case 2: 
delet ();
break;
case 3: 
display ();
break;
case 4: 
insert_spec ();
break;
case 5:
exit (0);
break;
default: 
printf ("Enter valid option \n");
break;
}
} while (choice !=6);
}
void insert ()
{
int data, key;
struct node *temp, *p;
temp= (struct node*) malloc(sizeof(struct node));
printf ("\n Enter the data: ");
scanf ("%d", &data);
temp->data=data;
printf ("\n Enter the key:");
scanf ("%d", &key);
temp->key=key;
if(head==NULL)
{
head=temp;
temp->next=head;
}
else
{
p=head;
while(p->next != head)
{
p=p->next;
}
temp->next=head;
p->next=temp;
head=temp;
}
printf ("\n INSERTED");
}
void delet()
{
struct node *temp;
if(head->next==head)
{
head=NULL;
free(head);
}
else
{
temp=head;
while(temp->next != head)
{
temp=temp->next;
}
temp->next=head->next;
free(head);
head=temp->next;
}
printf ("\n DELETED");
}
void display ()
{
struct node *temp=head;
if (head != NULL)
{
while(temp->next != head)
{
printf ("%d %d------>", temp->data, temp->key);
temp=temp->next;
}
printf ("%d %d", temp->data, temp->key);
}
}
void insert_spec ()
{
int data, key, loc;
struct node *temp, *temp1=head, *prev=NULL;
temp= (struct node*) malloc (sizeof (struct node));
printf ("\n Enter the location: ");
scanf ("%d", &loc);
if (loc <= 0)
{
printf ("\n Invalid Position\n");
}
else if (head == NULL && loc > 1)
{
printf ("\n Invalid Position\n");
}
else if(loc==1)
{
insert();
}
else
{
printf ("\n Enter the data: ");
scanf ("%d", &data);
temp->data=data;
printf ("\n Enter the key: ");
scanf ("%d", &key);
temp->key=key;
int i=1;
while (++i <= loc)
{
prev=temp1;
temp1=temp1->next;
}
prev->next=temp;
temp->next = temp1;
printf ("\n Node inserted");
}}

