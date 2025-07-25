#include <stdio.h>
#include<string.h>
char* myStrncat(char *dest, const char *src, int n) 
{
    int i = 0, j = 0;

    
    while (dest[i] != '\0') 
	{
        i++;
    }

    
    while (j < n && src[j] != '\0') 
	{
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; 
    return dest;
}

int main() 
{
    char str1[30] = "Hello ";
    char str2[] = "World";

    myStrncat(str1, str2, 4);  

    printf("Result: %s\n", str1);  

    return 0;
}
