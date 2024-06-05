#include <stdio.h>


struct student
{
    char name[20];
    int regno;
    int marks;
}s[20];
int main()
{
    int i,j,n,sum,a=2;
	float avg;
    printf("Enter 10 student entries\n");
    for ( i = 0; i < a; i++)
    {
        printf("student no.: %d\n",i+1);
        printf("Enter the name: ");
        scanf("%s",s[i].name);
        printf("Enter the Reg no.: ");
        scanf("%d",&s[i].regno);
        printf("Enter the marks: ");
        scanf("%d",&s[i].marks);
    }
    printf("\nEntered values\n");
    for ( i = 0; i < a; i++)
    {
        printf("Student no. %d\n",j+1);
        printf("Name: %s \n",s[i].name);
        printf("Reg No.: %d \n",s[i].regno);
        printf("Marks: %d \n",s[i].marks); 
    }
    for ( i = 0; i < a; i++)
    {
        sum=sum+s[i].marks;
        avg=sum/a;
    }
    
    printf("Average marks of these 10 students: %f",avg);
    return 0;
}

