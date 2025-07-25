#include <stdio.h>
#include <ctype.h>  // For tolower()

int myStrCaseCmp(char* str1, char* str2) 
{
    while (*str1 && *str2) 
	{
        char c1 = tolower(*str1);
        char c2 = tolower(*str2);

        if (c1 != c2)
            return c1 - c2;

        str1++;
        str2++;
    }

    return tolower(*str1) - tolower(*str2);
}

int main() {
    char s1[] = "Hello";
    char s2[] = "hello";

    int result = myStrCaseCmp(s1, s2);

    if (result == 1)
        printf("Strings are equal \n");
    else if (result < 0)
        printf("First string is less \n");
    else
        printf("First string is greater\n");

    return 0;
}
