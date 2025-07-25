#include <stdio.h>
#include <string.h>

int main() 
{
    char str3[10] = "Hello";

    
    memmove(str3 + 1, str3, 4);
    str3[5] = '\0';  

    printf("memmove: %s\n", str3);

    return 0;
}
