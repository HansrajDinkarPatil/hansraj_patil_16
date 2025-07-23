#include <stdio.h>
#include <string.h>

int main() 
{
    char *res = strpbrk("hello", "aeiou");

    printf("strpbrk: %s\n", res);
    return 0;
}
