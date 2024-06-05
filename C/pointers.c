#include <stdio.h>

void elcs(float *);

int main()
{
	int i=97,*p;
	p=&i;
	elcs(p++);
	
}

void elcs(float *c)
{
	printf("%d",*c);
}

