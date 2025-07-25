#include <stdio.h>
#include <string.h>

int main() 
{
    size_t span = strcspn("abc123", "123");

    printf(" strcspn: %zu\n", span);

    return 0;
}
