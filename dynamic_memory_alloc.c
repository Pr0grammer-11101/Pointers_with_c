#include<stdio.h>
#include<stdlib.h>

void main()
{
	int size, i=0, nsize;
	char ans;

	printf("enter the size of the array.....");
	scanf("%d", &size);

	i=0;

	int *p;

	p=(int *)calloc(size, sizeof(int));

	if(p==NULL)
		printf("not enough memory space......\n\n");

	else
	{
		printf("enter elements into the array.....\n\n");

		for(; i<size; i++)
			scanf("%d", p+i);

		printf("\nthis is the array that you created....\n\n");

		i=0;

		for(; i<size; i++)
			printf("%d ", p[i]);

		printf("\n\ndo you want to modify this array?(y/n)....");
		scanf(" %c", &ans);

		if(ans=='y'|| ans=='Y')
		{
			printf("\n\nenter the new size of the array.......");
			scanf("%d", &nsize);

			p=(int *)realloc(p, nsize);

			if(p==NULL)
				printf("\nnot enough space available.......\n\n");

			else 
			{
				i=size;

				printf("enter elements into the new array.....\n\n");

				for(; i<nsize; i++)
					scanf("%d", p+i);

				printf("\n\nthe modified array is.....\n\n");

				i=0;
				for(; i<nsize; i++)
					printf("%d ", p[i]);

				printf("\n\n\n_______complete_______\n\n\n");
			}

		}

		else
			printf("\n\n\n_______complete_______\n\n\n");

	}

	free(p);

	return;
}
