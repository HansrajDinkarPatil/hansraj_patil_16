#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[] = "Hello World";
    
    
    char *ptr = strrchr(str1, 'l');

    if (ptr != NULL) 
	{
        printf("Last occurrence of 'l' is at: %s\n", ptr);
    } 
	else 
	{
        printf("Character not found.\n");
    }

    return 0;
}
