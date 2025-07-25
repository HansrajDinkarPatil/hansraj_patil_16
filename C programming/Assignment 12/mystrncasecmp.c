#include <stdio.h>
#include <ctype.h>  // For tolower()

int myStrnCaseCmp(const char *s1, const char *s2, int n) 
{
    while (n-- && *s1 && *s2) 
	{
        char c1 = tolower(*s1);
        char c2 = tolower(*s2);

        if (c1 != c2)
            return c1 - c2;

        s1++;
        s2++;
    }
    return 0;
}

int main() 
{
    char str1[] = "HELLO";
    char str2[] = "hello";

    int result = myStrnCaseCmp(str1, str2, 3);

    if (result == 0)
        printf("First 3 characters are equal (case-insensitive).\n");
    else
        printf("They are different. Result = %d\n", result);

    return 0;
}
