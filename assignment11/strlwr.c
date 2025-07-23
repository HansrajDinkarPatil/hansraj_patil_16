#include <stdio.h>
#include <ctype.h>  

int main() {
    char str2[] = "HeLLo WoRLD";

    
    for (int i = 0; str2[i]; i++) {
        str2[i] = tolower(str2[i]);
    }

    printf("13. strlwr (manual): %s\n", str2);

    return 0;
}
