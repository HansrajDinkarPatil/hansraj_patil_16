#include<stdio.h>
void main()
{
	int arr[10],i;
	
	printf("enter 10 element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("alternate number are \n");
	for(i=0;i<10;i+=2)
	
	printf("%d",arr[i]);
	

}