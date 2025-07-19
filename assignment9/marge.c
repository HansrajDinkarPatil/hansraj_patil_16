#include<stdio.h>

void main()
{
    int arr1[5], arr2[5], merged[10];
    int i;

    // Input for first array
    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    for(i = 0; i < 5; i++)
    {
        merged[i] = arr1[i];
        merged[i + 5] = arr2[i];
    }

    // Output merged array
    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", merged[i]);
    }

   
}
