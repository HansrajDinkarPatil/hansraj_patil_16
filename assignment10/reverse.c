#include <stdio.h>
void inputArray(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}


void printArray(int arr[], int size) 
{
    printf("Original array:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void printReverseArray(int arr[], int size) 
{
    printf("Reversed array:\n");
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int arr[10];

    inputArray(arr, 10);
    printArray(arr, 10);
    printReverseArray(arr, 10);
}
