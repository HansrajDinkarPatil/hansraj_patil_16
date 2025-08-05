#include<stdio.h>


void getSumFirstLast(int *n);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    getSumFirstLast(&num);
}

void getSumFirstLast(int *n)
{
    int num = *n;
    int first, last,sum;

    last = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    first = num;
    sum = first + last;

    printf("Sum of First & Last Digit = %d\n",sum);
}
