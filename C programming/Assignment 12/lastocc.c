#include<stdio.h>
#include<string.h>
char* mystrrchr(char* ,char );
int main()
{
	char str[]="solustion ";
	char* ptr;
	char ch='l';
	ptr=mystrrchr(str,ch);
	if(ptr!=NULL)
		printf("last occurence of l :%s",ptr);
	else
		printf("l not found");
		
		return 0;
	
}
char* mystrrchr(char* str1,char str2)
{
	char* last;
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]==str2)
			last= &str1[i];
		i++;
	}
	return last;
	
}