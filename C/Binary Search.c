#include <stdio.h>
int main()
{
    printf(" NAME : NIKKITT MESILIY\n REG NO : 2162609\n\n");
	
  int c, first, last, middle, n,i,j, search,temp, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

    for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(array[i] > array[j])
		    {
			    temp=array[i];
			    array[i]=array[j];
			    array[j]=temp;
		    }
		}	
    }
    
    
	
  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
