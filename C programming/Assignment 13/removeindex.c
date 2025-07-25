#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,n;
	
	printf("enter the string ");
	gets(str);
	
	printf("enter index to remove");
	scanf("%d",&n);
	
	for(int i=n;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
    }
  printf("modified string %s \n",str);
  return 0;
}