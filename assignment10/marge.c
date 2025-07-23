#include <stdio.h>
void Array(int arr[], int size, const char name[]) 
{
    printf("Enter %d elements for %s:\n", size, name);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}


void mergeArrays(int arr1[], int arr2[], int merged[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        merged[i] = arr1[i];
        merged[i + size] = arr2[i];
    }
}

// Function to display an array
void displayArray(int arr[], int size, const char name[]) 
{
    printf("%s:\n", name);
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int arr1[5], arr2[5], merged[10];

    Array(arr1, 5, "first array");
    Array(arr2, 5, "second array");

    mergeArrays(arr1, arr2, merged, 5);

    displayArray(merged, 10, "Merged array");
}
