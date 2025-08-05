#include<stdio.h>

void getArmstrongRange(int *n);
void main()
{
    int num;
    printf("Enter the range: ");
    scanf("%d",&num);
    getArmstrongRange(&num);
}

void getArmstrongRange(int *n)
{
    int i,temp,rem,sum;
    printf("Armstrong numbers from 1 to %d:\n",*n);

    for (i=1; i<=*n; i++)
	{
        temp = i;
        sum = 0;

        while (temp > 0)
		{
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == i)
		{
            printf("%d\n",i);
        }
    }
}
