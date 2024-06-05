#include<stdio.h>
#include<conio.h>
struct rail
{
    int customer_id;
    int cost;
}h[10];

int main()
{
	printf("DOMAIN : GROCERY STORE MANAGEMENT \n NAME : NIKKITT MESILIY \n ROLL NO : 2162609\n\n");
    FILE *fp;
    fp=fopen("Nice.txt","w");
    int i,n,total_cost=0;
    printf("Enter the number of entries\n");
    scanf("%d",&n);
    if(fp==NULL)
    {
        printf("File cannot be created");
    }
    else
    {  
        for(i=0;i<n;i++)
        {
            printf("Enter customer id\n");
            scanf("%d",&h[i].customer_id);
            printf("Enter cost\n");
            scanf("%d",&h[i].cost);
            total_cost+=h[i].cost;
       }  
       fwrite(h,sizeof(h),1,fp);
       fclose(fp);
    }
    fp=fopen("Nice.txt","r");
    fread(h,sizeof(h),1,fp);
    for(i=0;i<n;i++)
    {
        printf("customer id %d : %d\n",i+1,h[i].customer_id);
        printf("cost for customer %d : %d\n",i+1,h[i].cost);
    }
    printf("\n\nTotal cost:%d",total_cost);
    fclose(fp);
    return 0;
}
