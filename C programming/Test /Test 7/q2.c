#include<stdio.h>
void checkpalindrome(int arr[],int size)
{
	int i,flag=1;
	for(i=0;i<size/2;i++)
	{
		if(arr[i]!=arr[size -i -1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	printf("The array is palindrome \n");
	else
	printf("the array is not a palindrome \n");
}
void main()

{
	int n,i;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	checkpalindrome(arr,n);
	

}