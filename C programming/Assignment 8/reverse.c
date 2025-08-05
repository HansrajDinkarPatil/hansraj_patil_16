#include<stdio.h>

void reverseArray(int *arr, int size)
{
    int i,temp;
    for(i=0; i<size/2; i++)
	{
        temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
}

void main()
{
    int arr[5]={1,2,3,4,5},i;
    printf("elements in array: ");
    for(i=0; i<5; i++)
	printf("%d ",arr[i]);

    reverseArray(arr,5);

    printf("\nReversed array: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
}
