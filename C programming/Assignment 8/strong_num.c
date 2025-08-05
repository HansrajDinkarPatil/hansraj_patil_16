#include<stdio.h>

void getStrongeNum(int *n);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    getStrongeNum(&num);
}

void getStrongeNum(int *n)
{
    int temp = *n, digit, sum = 0;

    while(temp != 0)
    {
        digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == *n)
        printf("%d is a Strong number \n",*n);
    else
        printf("%d is not a Strong number \n",*n);
}
