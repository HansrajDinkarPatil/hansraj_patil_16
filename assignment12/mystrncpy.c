#include <stdio.h>
#include<string.h>
char* mystrncpy(char *dest, const char *src, int n) 
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) 
	{
        dest[i] = src[i];
    }

    for (; i < n; i++) 
	{
        dest[i] = '\0';
    }
    return dest;
}

int main() {
    char source[] = "Hello";
    char destination[10];

    mystrncpy(destination, source, 3);

    printf("Copied string = %s\n", destination); 

    return 0;
}
