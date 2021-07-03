#include<stdio.h>

int main(void)
{
	int a[]={5, 2, 6, 9, 1, 5, 6, 2, 7, 4}, i;

	int *pi; // pointer to integer
	int (*pa)[10]; // pointer to array

	printf("\nPrinting the whole array using \"pointer to integer\"....\n\n");

	pi=a;

	i=0;
	while(i<10)
	{
		printf("%d  ", *(pi+i));
		i++;
	}

	printf("\n\nPrinting the whole array using \"pointer to array\"....\n\n");

	pa=&a;

	i=0;
	while(i<10)
	{
		printf("%d  ", *(*pa+i));
		i++;
	}

	return 0;
}
