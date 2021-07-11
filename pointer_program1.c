#include<stdio.h>

int main(void)
{
	int a[3][4]=
	{
		{1, 2, 3, 4},
		{11, 12, 13, 14},
		{21, 22, 23, 24}
	};

	int *p; // pointer to integer

	p= *a;

	int i=0;

	while(i<4)
	{
		printf("%d ", *(p+i));
		i++;
	}

	return 0;
}
