#include<stdio.h>

int main(void)
{
	int a[30], size, i;

	int *p;
	p=a;

	printf("Enter the size of the array: ");

	scanf("%d", &size);

	printf("Enter the elements into the array:\n\n");

	i=0;

	while(i<size)
	{
		scanf("%d", (p+i));

		i++;
	}

	int temp;

	

	printf("\nNow, sorting the array....\n\n");

	i=0;
	int j;

	while(i<size)
	{
		j=0;
		while(j<size-1)
		{
			if(*(p+j)>*(p+(j+1)))
			{
				temp=*(p+j);
				*(p+j)=*(p+(j+1));
				*(p+(j+1))=temp;
			}

			j++;
		}

		i++;
	}

	printf("\nPrinting the array after sorting it.....\n\n");

	i=0;

	while(i<size)
	{
		printf("%d  ", *p);
		i++, p++;
	}


	return 0;
}
