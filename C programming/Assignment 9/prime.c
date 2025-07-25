#include<stdio.h>
int isPrime(int num)
 {
    int i;
    if(num < 2)
        return 0;
    for(i = 2; i <= num/2; i++)
	 {
        if(num % i == 0)
            return 0;
     }
    return 1;
}
void main()
{
    int arr[10], i,prime=0;

    
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
	{
        scanf("%d", &arr[i]);
    }


    printf("Prime numbers in the array are:\n");
    for(i = 0; i < 10; i++)
	 {
        if(isPrime(arr[i]))
		{
            printf("%d ", arr[i]);
        }
    }
}






