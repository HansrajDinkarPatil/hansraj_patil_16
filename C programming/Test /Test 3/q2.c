#include <stdio.h>
void main()
 {
    int start, end, sum = 0;

    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i += 2) 
	{
        sum += i;
    }

    printf("Sum of alternate numbers = %d\n", sum);
}
