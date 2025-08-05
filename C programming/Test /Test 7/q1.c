#include<stdio.h>
void swappostions(int arr[],int size,int x,int y)
{
	if( x>=0&& x < size && y >=0&&y<size)
	{
		int temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
	}
	else
	{
		printf("invalide positions! \n");
	}
}
int main()
{
	int arr[]={11,23,30,4,21,45,50};
	int size =sizeof(arr[0]);
	int x,y;
	
	printf("enter xth positions \n");
	scanf("%d",&x);
	
	printf("enter yth positions \n");
	scanf("%d", &y);
	
	x-=1;
	y-=1;
	
	printf("array after swapping\n");
	for( int i =0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	
	printf("\n");
	
	return 0;
}