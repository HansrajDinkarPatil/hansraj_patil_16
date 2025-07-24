#include <stdio.h>
#include<string.h>
char* myStrnStr(char* haystack, char* needle, int n) 
{
    int i, j;
    if (*needle == '\0') return haystack;

    for (i = 0; haystack[i] != '\0' && i <= n; i++) 
	{
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < n) 
		{
            j++;
        }
        if (needle[j] == '\0')
            return &haystack[i];
    }
    return NULL;
}

int main() 
{
    char str[] = "programming in C";
    char sub[] = "gram";

    char* result = myStrnStr(str, sub, 10);  

    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
