#include<stdio.h>
void inputArray(int arr[], int size) 
{
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}
void sumArray(int arr[], int size) 
{
    int sum = 0;
    for(int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n", sum);
}

void main() 
{
    int arr[10];

    inputArray(arr, 10);
    sumArray(arr, 10);
}
