#include <stdio.h>
void inputArray(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}
void findMaxMin(int arr[], int size) 
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
}

void main() 
{
    int arr[10];

    inputArray(arr, 10);
    findMaxMin(arr, 10);
}
