#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str2[] = "World";

    
    char *copy = strdup(str2);

    if (copy != NULL) 
	{
        printf("strdup: %s\n", copy);
        free(copy);  
    } 
	else 
	{
        printf("Memory allocation failed.\n");
    }

    return 0;
}
