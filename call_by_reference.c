#include<stdio.h>

int increase(int*, int*);

int main(void)
{
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	increase(&a, &b);

	printf("\n\nThe values of a and b are..\n\n");

	printf("%d, %d", a, b);

	return 0;
}


int increase(int *p, int *q)
{
	(*p)++;
	(*q)++;

	return 0;
}
