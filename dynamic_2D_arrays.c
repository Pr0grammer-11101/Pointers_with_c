#include<stdio.h>
#include<stdlib.h>

void main()
{
    int rows;
    
    printf("enter the number of rows.....");
    scanf("%d", &rows);
    
    int *p[rows], i, j;
    
    i=0;
    
    for(; i<rows;)
    {
        p[i]=(int *)calloc(rows, sizeof(int));
        i++;
    }
    
    printf("\nenter the elements into the matrix.......\n\n");
    
    i=0;
    for(; i<rows; )
    {
        j=0;
        for(; j<rows; j++)
        {
            scanf("%d", (p[i]+j));
        }
        
        i++;
    }
    
    printf("\n\nThe matrix is.....\n\n");
    
    i=0;
    
    for(; i<rows; i++)
    {
        j=0;
        for(; j<rows; j++)
        {
            printf("%d ", *(*(p+i)+j));
        }
        
        printf("\n");
    }
    
    free(p);
    
}