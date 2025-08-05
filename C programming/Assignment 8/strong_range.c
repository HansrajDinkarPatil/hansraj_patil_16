#include<stdio.h>

void getStrongeRange(int *n);
void main()
{
    int num;
    printf("Enter the range: ");
    scanf("%d",&num);

    getStrongeRange(&num);
}

void getStrongeRange(int *n)
{
    int i, j, num, rem, fact, sum;

    for(i = 1; i <= *n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            rem = num % 10;
            fact = 1;
            for(j = 1; j <= rem; j++)
            {
                fact *= j;
            }
            sum += fact;
            num /= 10;
        }
        if(sum == i)
        {
            printf("%d is a strong number\n",i);
        }
    }
}
