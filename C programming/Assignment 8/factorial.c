#include<stdio.h>

void getFactorial(int *n);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    getFactorial(&num);
}

void getFactorial(int *n)
{
    int fact = 1;
    int i;

    for (i=1; i<=*n; i++)
	{
        fact *= i;
    }
    printf("Factorial of %d = %d\n",*n,fact);
}
