#include<stdio.h>

void getDivisible(int *no);

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    getDivisible(&num);
}

void getDivisible(int *no)
{
    if (*no % 3 == 0 && *no % 5 == 0)
	{
        printf("Divisible by both 3 and 5\n");
    }
    else if (*no % 5 == 0)
	{
        printf("Divisible by 5 but not by 3\n");
    }
    else if (*no % 3 == 0)
	{
        printf("Divisible by 3 but not by 5\n");
    }
    else
	{
        printf("Divisible by none\n");
    }
}
