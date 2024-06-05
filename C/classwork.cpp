	for(j=0;j<n;j++)
	{
		if(search==a[j])
		{
			c++;
			arrayposition(j,c);
			flag=1;
		 
		}
	}
	 
}
void arrayposition(int p,int q)
{
	int *ptr= (int *)malloc(sizeof(int));
	*(ptr+q)=p;
	
}

