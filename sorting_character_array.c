#include<stdio.h>

void sort_array(char[], int);

int main(void)
{
	char str[30], s, i;
	
	printf("enter the size of the array...");
	scanf("%d", &s);
	
	printf("\nenter the elements into the array....\n\n");
	i=0;
	while(i<s)
	{
		scanf(" %c", &str[i]);
		i++;
	}
	
	printf("\ndiaplaying the array clearly.......\n\n");
	
	i=0;
	while(i<s)
	{
		printf("%c ", str[i]);
		i++;
	}
	sort_array(str, s);
	
	printf("\nprinting the array after sorting it...\n\n");
	i=0;
	while(i<s)
	{
		printf("%c ", str[i]);
		i++;
		
	}
	
	return 0;
	
}

void sort_array(char a[], int s)
{
	int i, j, temp;
	
	i=0;
	while(i<s)
	{
		j=0;
		while(j<s-1)
		{
			if((int)a[j]>(int)a[j+1])  // typcasting and swapping the characters
			{
				temp=(int)a[j];
				a[j]=a[j+1];
				a[j+1]=(char)temp;
			}
			
			j++;
		}
		
		i++;
	}
	
}