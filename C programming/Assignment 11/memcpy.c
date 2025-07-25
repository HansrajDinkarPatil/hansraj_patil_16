#include <stdio.h>
#include <string.h>

int main() 
{
    char str3[10];

    
    memcpy(str3, "Copy", 5); 

    printf("memcpy: %s\n", str3);

    return 0;
}
