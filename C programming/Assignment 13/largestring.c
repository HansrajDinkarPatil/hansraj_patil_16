#include <stdio.h>
#include<string.h>


int main() 
{
    char str1[100], str2[100];
    int i = 0, len1 = 0, len2 = 0;
    
    printf("Enter first string");
    gets(str1);
    
    printf("Enter the second string");
    gets(str2);
    
    
    while (str1[len1]!='\0')
	{
    	len1++;
	}
	while(str2[len2]!='\0')
	{
		len2++;
	}
	
	if(len1>len2)
	{
		printf("large string %s \n",str1);
	}
	else if (len2>len1)
	{
		printf("large string %s \n",str2);
	}
	else 
	{
		printf("both string are equal length \n");
	}
	
	return 0;
    
}