#include <stdio.h>
void Array(int arr[], int size)
{
    int i;
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printAlternate(int arr[], int size) 
{
    int i;
    printf("Alternate elements are:\n");
    for(i = 0; i < size; i += 2)
	{
        printf("%d ", arr[i]);
    }
}

void main() {
    int arr[10];

    Array(arr, 10);        
    printAlternate(arr, 10);     
}
