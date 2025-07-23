#include <stdio.h>
#include <string.h>

int main() 
{
    int result = memcmp("ABC", "ABD", 2);  

    printf("memcmp: %d\n", result);   
    return 0;
}
