#include <stdio.h>
int isPrime(int num) 
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= num / 2; i++) 
	{
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void inputArray(int arr[], int size) 
{
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void printPrimeNumbers(int arr[], int size) 
{
    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < size; i++) 
	{
        if (isPrime(arr[i])) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void main() 
{
    int arr[10];

    inputArray(arr, 10);
    printPrimeNumbers(arr, 10);
}
