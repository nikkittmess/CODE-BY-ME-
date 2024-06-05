
#include <stdio.h>

int main()
{
    int marks[2][10];
    char name[10][10];
    int avg[10];
    int stop=0;
    int y=0,i;
    
    FILE* fptr;
    fptr = fopen("in.txt", "rw");
    
    while(stop==0)
    {

        printf("Enter name of the student : ");
        scanf("%s",&name[y]);
        printf("Enter marks of %s : ",name[y]);
        scanf("%d",&marks[1][y]);
        scanf("%d",&marks[2][y]);
        y++;
        printf("Do you want to stop?");
        scanf("%d",&stop);
        
    }
    for(i=0;i<y;i++)
    {
        avg[i]=(marks[1][i]+marks[2][i])/2;
        if (avg[i]>90)
        {
            printf("NAME : %s\n",name[i]);
            printf("AVG GRADE : %d\n",avg[i]);
            printf("GRADE : A\n");
            break;
        }
        else if (avg[i]>80 && avg[i]<90)
        {
            printf("NAME :%s\n",name[i]);
            printf("AVG GRADE : %d\n",avg[i]);
            printf("GRADE : B\n");
            break;
        }
        else if (avg[i]>70 && avg[i]<80)
        {
            printf("NAME : %s\n",name[i]);
            printf("AVG GRADE : %d\n",avg[i]);
            printf("GRADE : C\n");
            break;
        }
        else if (avg[i]>60 && avg[i]<70)
        {
            printf("NAME : %s\n",name[i]);
            printf("AVG GRADE : %d\n",avg[i]);
            printf("GRADE : D\n");
            break;
        }
        else 
        {
            printf("NAME :%s\n",name[i]);
            printf("AVG GRADE : %d\n",avg[i]);
            printf("GRADE : F\n");
            
        }
    }
   
    
}

