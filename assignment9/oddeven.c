#include<stdio.h>
void main()
{
	int arr[10],i;
	
	printf("enter 10 element");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 
	 printf("enter even number \n");
	 for(i=0;i<10;i++)
	 {
	 	if(arr[i]%2==0)
	 	printf("%d",arr[i]);
	 	
	 }
	 
	 
	 printf("enter odd number");
	 for(i=0;i<10;i++)
	 {
	 	if(arr[i]%2!=0)
	 	printf("%d",arr[i]);
	 }
}