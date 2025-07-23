#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello World";
    char str3[50]; // Make sure destination is large enough

    strcpy(str3, str1);  // Copy str1 to str3

    printf("1. strcpy: %s\n", str3);  // Print str3
    
    return 0;
}

	

