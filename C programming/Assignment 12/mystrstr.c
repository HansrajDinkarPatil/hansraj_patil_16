#include <stdio.h>
#include<string.h>
char* myStrStr(char* str, char* substr) {
    if (*substr == '\0') return (char*)str;

    while (*str) {
        char *start = str;
        char *s = substr;

        while (*str && *s && *str == *s) {
            str++;
            s++;
        }

        if (*s == '\0')
            return (char*)start;

        str = start + 1;
    }

    return NULL;
}

int main() {
    char str[] = "HelloWorld";
    char substr[] = "loW";

    char* result = myStrStr(str, substr);

    if (result != NULL)
        printf("Substring found at: %s\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}
