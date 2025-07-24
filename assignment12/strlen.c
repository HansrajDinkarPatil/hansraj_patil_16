#include <stdio.h>
#include<string.h>
int mystrlen(const char *str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    return length;
}

int main() 
{
    char str[] = "Hello World";
    
    int len = mystrlen(str);
    printf("Length of string = %d\n", len);  

    return 0;
}
