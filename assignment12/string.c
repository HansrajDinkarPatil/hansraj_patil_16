#include<stdio.h>
#include<string.h>
char*mystrrev(char* dest,char* str);
void main()
{
	char st1[20];
	char str2[]="patil";
	
	mystrrev(st1,str2);
	printf("revers string %s \n",st1);
	
}
char*mystrrev(char* dest,char* str)
{
	int len =strlen(str);
	int i=0;
	
	while(i<len)
	{
		dest[i] =str[len -1 -i];
		i++;
		
	}
	
	dest[i]='\0';
	
	return dest;
	
}