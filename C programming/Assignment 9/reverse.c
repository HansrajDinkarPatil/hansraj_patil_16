#include<stdio.h>
void main()
{
	int arr[10],i;
	
	printf("enter 10 element \n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the orignal element \n");
	for(int i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	
	printf("reverse the element \n");
	for(int i=9;i>0;i--)
	{
		printf(" \n %d",arr[i]);
	}
}