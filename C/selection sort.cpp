//NIKKITT MESILIY 2162609
#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_index;

	// BELOW FOR LOOP USED FOR TRAVERSAL OF LIST 
	for (i = 0; i < n-1; i++)
	{
		
		min_index = i;
		//BELOW FOR LOOP USED TO COMPARE WITH NEXT ELEMENT
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_index])
		{
			min_index = j;
		}
			

		//SWAP IF ITS NOT AT CURRENT POSITION 
		if(min_index != i)
			swap(&arr[min_index], &arr[i]);
	}
}

//PRINT THE ARRAY
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}



int main()
{
	int arr[5],x;
	printf("Enter 5 elements :\n");
	for(x=0;x<5;x++)
	{
		scanf("%d",&arr[x]);
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
