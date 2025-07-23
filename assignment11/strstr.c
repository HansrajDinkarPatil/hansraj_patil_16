#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello World";

    
    char *ptr = strstr(str1, "lo");

    if (ptr != NULL) {
        printf("strstr: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
