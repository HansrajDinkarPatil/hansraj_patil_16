#include <stdio.h>
void inputArray(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}
void sortArray(int arr[], int size) 
{
    int temp;
    for(int i = 0; i < size - 1; i++) 
	{
        for(int j = 0; j < size - 1 - i; j++) 
		{
            if(arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) 
{
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int arr[5];
    
    inputArray(arr, 5);
    sortArray(arr, 5);
    printArray(arr, 5);
}
