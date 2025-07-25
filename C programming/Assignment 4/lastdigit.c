#include <stdio.h>

void main()
{
    int n, first, last;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;     

    
    first = n;
    while (first >= 10)
    {
        first = first / 10;
    }

    int sum = first + last;
    printf("Sum of first and last digit = %d\n", sum);
}
