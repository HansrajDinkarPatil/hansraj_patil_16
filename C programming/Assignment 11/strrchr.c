#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Hello";
    char *ptr;

    ptr = strrchr(str, 'l');  

    if (ptr != NULL)
        printf("9. strrchr: %s\n", ptr);  
    else
        printf("Character not found.\n");

    return 0;
}