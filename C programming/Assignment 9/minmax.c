#include<stdio.h>
void main()
{
	int arr[10];
	int i;
	
	printf("enter 10 element :\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	 int min=arr[0];
	 int max=arr[0];
	 	 
	 
	 for(int i=0;i<10;i++)
	 {
	 	if(arr[i]>max)
	 	max=arr[i];
	 	
	 	if(arr[i]<min)
	 	min=arr[i];
	 	
	 	
	 }
	 
	 printf("max= %d \n ",max);
	 printf("min %d \n",min);
	 
	 
}