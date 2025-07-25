#include <stdio.h>
void Array(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void searchNumber(int arr[], int size, int num) 
{
    int found = 0;
    int i;

    for (i = 0; i < size; i++) 
	{
        if (arr[i] == num) 
		{
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number %d is found at position %d\n", num, i);
    else
        printf("Number %d is not found in the array.\n", num);
}

void main() 
{
    int arr[10], num;

    Array(arr, 10);

    printf("Enter number to search:\n");
    scanf("%d", &num);

    searchNumber(arr, 10, num);
}
