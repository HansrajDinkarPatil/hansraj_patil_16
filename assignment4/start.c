#include <stdio.h>

void main() 
{
    int start, end, sum = 0, i;

    
    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    
    for(i = start; i <= end; i++) 
	{
        sum = sum + i;
    }

    
    printf("Sum = %d\n", sum);
}
