#include <stdio.h>
#include <string.h>

int main() {
    char str5[] = "C,is,a,language";
    char *token = strtok(str5, ",");

    printf("19. strtok: ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");
    return 0;
}
