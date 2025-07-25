#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,found=0;
	
	printf("enter the string");
	gets(str);
	
	printf("enter a character to search");
	scanf("%c",&ch);
	
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("'%c'found the postion %d\n",ch,i+1);
	         found=1;
		}
		
	}
	if (!found)
	printf("'%c'not found in the string \n",ch);
}