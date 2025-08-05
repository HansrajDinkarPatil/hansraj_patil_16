#include<stdio.h>

void getOddOrEven(int *no);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    getOddOrEven(&num);
}

void getOddOrEven(int *no)
{
    if (*no % 2 == 0)
	{
        printf("%d is Even\n",*no);
    }
	else
	{
        printf("%d is Odd\n",*no);
    }
}
