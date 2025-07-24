#include <stdio.h>
#include<string.h>

char* myStrChr(const char* str, char ch) 
{
    while (*str != '\0') 
	{
        if (*str == ch)
            return (char*)str;  
        str++;
    }

    return NULL;  
}

int main() 
{
    char str[] = "Welcome to C!";
    char ch = 'C';

    char* result = myStrChr(str, ch);

    if (result != NULL)
        printf("Character '%c' found at: %s\n", ch, result);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}
