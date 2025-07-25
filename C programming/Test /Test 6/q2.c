#include<stdio.h>
void main()
{
    int arr[5];
    int i;

    printf("enter 5 element");

    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];


    for(int i=0; i<5; i++)
    {

        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];

    }
    {


        printf("max = %d \n",max);
        printf("min = %d \n",min);

    }

}