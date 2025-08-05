#include<stdio.h>

void getPerfectRange(int *n);

void main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);

    getPerfectRange(&n);
}

void getPerfectRange(int *n)
{
    int i,j,sum;

    for(i = 1; i <= *n; i++)
	{
        sum = 0;
        for(j = 1; j < i; j++)
		{
            if(i % j == 0)
			{
                sum += j;
            }
        }

        if(sum == i)
		{
            printf("%d is a perfect number\n",i);
        }
    }
}
