#include<stdio.h>
#include<string.h>
 char*mystrcpy(char* dest,char* str);
int main()
{
	char str[]="hello";
	char org[20];
	
	mystrcpy(org,str);
	printf(" copied string = %s \n",str);
	
} 
char*mystrcpy(char* dest,char* str)
{
    int i=0;
	while (i!='\0')
	{
		dest[i]=str[i];
		i++;
	}
	dest[i]='\0';
	

	
	return  dest;
}