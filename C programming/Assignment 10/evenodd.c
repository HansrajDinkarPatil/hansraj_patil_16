#include <stdio.h>
void inputArray(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void printEvenNumbers(int arr[], int size) 
{
    printf("Even numbers are:\n");
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void printOddNumbers(int arr[], int size) 
{
    printf("Odd numbers are:\n");
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int arr[10];

    inputArray(arr, 10);
    printEvenNumbers(arr, 10);
    printOddNumbers(arr, 10);
}
