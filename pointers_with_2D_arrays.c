#include<stdio.h>

int main(void)
{
	int a[3][4]=
	{
		{1, 2, 3, 4},
		{11, 12, 13, 14}, 
		{21, 22, 23, 24}
	};

	int *p, (*pr)[4], *par[3];

	// p -> pointer to integer
	// pr -> pointer to array
	// par -> array of pointers
	
	int i, j;

	// printing the whole array with pointer to integer
	
	printf("\nPrinting the whole 2D array using pointer to integer....\n\n");
	p=*a;

	i=0;
	while(i<3)
	{
		j=0;
		while(j<4)
		{
			printf("%d ", p[j]);
			j++;
		}

		printf("\n");
		i++;
		p=*(a+i);
	}

	// printing the whole array with pointer to array
	

	printf("\n\nPrinting the whole 2D array using pointer to array...\n\n");
	pr=a;

	i=0;
	while(i<3)
	{
		j=0;
		while(j<4)
		{
			printf("%d ", *(*(pr+i)+j));
			j++;
		}

		printf("\n");
		i++;
	}

	// printing the whole array using array of pointers
	

	i=0;
	while(i<3)
	{
		par[i]=a[i];  // a[i] is same as *(a+i)
		i++;
	}

	printf("\nPrinting the whole 2D array using array of pointers....\n\n");

	i=0;

	while(i<3)
	{
		j=0;
		while(j<4)
		{
			printf("%d ", *(par[i]+j));
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;
}
