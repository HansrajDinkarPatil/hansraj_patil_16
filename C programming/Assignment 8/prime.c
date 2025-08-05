#include<stdio.h>

void getPrime(int *n);

void main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d",&n);
    getPrime(&n);
}

void getPrime(int *n)
{
    int a = 2, isPrime = 1;
    int num = *n;

    if (num <= 1)
	{
        isPrime = 0;
    }
	else
	{
        while(a <= num / 2)
		{
            if(num % a == 0)
			{
                isPrime = 0;
                break;
            }
            a++;
        }
    }

    if(isPrime)
        printf("The num is prime\n");
    else
        printf("The num is not prime\n");
}
