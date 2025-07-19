#include<stdio.h>
void main()
{
	int arr[10],i,sum=0;
	
	printf("enter 10 elements : \n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	
	
	printf("sum of all elements = %d \n",sum);
}