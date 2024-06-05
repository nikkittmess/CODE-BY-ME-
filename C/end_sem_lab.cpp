#include "stdio.h"

//PROGRAM BY NIKKITT MESILIY - 2162609

int main()
{
	char ch[20],s[20];
	int i,k,count=0,n;
	
     
	printf("Enter length of your name : ");                              //asking for lenth of name for later use
	scanf("%d",&n);
	
	
	printf("Enter your  name : ");
	scanf(" %s",&ch);
	
	
	printf("Ocurrence of each character in the name %s = \n",ch);

                                                       
	for(k=0;k<n;k++)                                                    //first for loop to assign character that needs to be checked 
	{
		s[k]=ch[k];
		for(i=0;i<n;i++)                                                //second for loop to check with every value in the name                
		{
			if(s[k]==ch[i])                                             //if loop to check each if character reoccurs
			{
				count+=1;
			}
		}
		if(s[k]!=s[k-1] && s[k]!=s[k+1])         
		{
			printf("%c occurence = %d\n",s[k],count);                   //prints character along with occurrences
		}
		
	    count=0;
		
	}
	
}
