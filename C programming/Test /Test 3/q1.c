#include<stdio.h>

void main()
{
    int start, end;

    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("\n Even numbers: ");
    for(int i = start; i <= end; i++) 
	{
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\n Odd numbers: ");
    for(int i = start; i <= end; i++)
	 {
        if(i % 2 != 0)
            printf("%d ", i);
    }
}
