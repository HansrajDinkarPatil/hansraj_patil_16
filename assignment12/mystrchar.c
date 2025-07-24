#include <stdio.h>
#include<string.h>
char* myStrrchr( char* , char );
int main()
{
    char str[] = "Hello";
    char *ptr;

    ptr = myStrrchr(str, 'l');  

    if (ptr != NULL)
        printf("myStrrchr: %s\n", ptr);
    else
        printf("Character not found.\n");

    return 0;
}

char* myStrrchr( char* str, char ch)
{
    char* last = NULL;

    while (*str != '\0')
	{
        if (*str == ch)
            last = (char*)str;  
        str++;
    }
      return last;
}
