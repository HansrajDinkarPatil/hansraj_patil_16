#include<stdio.h>

void getPrimeRange(int *n);
void main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    getPrimeRange(&n);
}

void getPrimeRange(int *n)
{
    int i,j,flag;

    for(i = 2; i <= *n; i++)
	{
        flag = 1;
        for(j = 2; j <= i / 2; j++)
		{
            if (i % j == 0)
			{
                flag = 0;
                break;
            }
        }
        if(flag == 1)
		{
            printf("%d is a prime number\n",i);
        }
    }
}
