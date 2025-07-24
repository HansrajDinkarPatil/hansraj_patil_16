#include <stdio.h>
#include<string.h>
char* myStrcpy(char* dest, const char* src);
int main ()
{
    char str1[] = "firstbit solution";
    char str3[50]; 

    myStrcpy(str3, str1);  

    printf("myStrcpy: %s\n", str3);

    return 0;
}
char* myStrcpy(char* dest, const char* src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
	return dest; 
}

