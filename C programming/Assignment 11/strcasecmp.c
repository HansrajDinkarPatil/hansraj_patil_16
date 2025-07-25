#include <stdio.h>
#include <string.h> 

int main() 
{
    char str1[] = "HELLO";
    char str2[] = "hello";

    int result = strcasecmp(str1, str2);

    printf("strcasecmp: %d\n", result);

    return 0;
}
