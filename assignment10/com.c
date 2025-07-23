#include <stdio.h>
void Array(int arr[], int size, const char name[]) 
{
    printf("\nEnter %d elements for %s: ", size, name);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
}

void findCommonElements(int arr[], int brr[], int crr[], int size) 
{
    printf("\nCommon elements in all three arrays:\n");

    for (int i = 0; i < size; i++) 
	{
        int foundInB = 0, foundInC = 0;

        
        for (int j = 0; j < size; j++) 
		{
            if (arr[i] == brr[j]) 
			{
                foundInB = 1;
                break;
            }
        }

        
        for (int k = 0; k < size; k++) 
		{
            if (arr[i] == crr[k]) 
			{
                foundInC = 1;
                break;
            }
        }

        if (foundInB && foundInC) 
		{
            printf("%d ", arr[i]);
        }
    }
}

void main() {
    int arr[5], brr[5], crr[5];

    Array(arr, 5, "arr");
    Array(brr, 5, "brr");
    Array(crr, 5, "crr");

    findCommonElements(arr, brr, crr, 5);
}
