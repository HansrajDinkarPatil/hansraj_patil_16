#include <stdio.h>
#include <string.h>  

int main() {
    char str3[20];


    memset(str3, '*', 5);

    str3[5] = '\0';

    printf(" memset: %s\n", str3);

    return 0;
}
