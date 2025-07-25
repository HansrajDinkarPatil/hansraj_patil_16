#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200];
    int i = 0, wordCount = 0;

    printf("Enter a string: ");
    gets(str); 

    while(str[i] != '\0') 
	{
        if((str[i] != ' ' && str[i] != '\t') &&
           (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\0')) 
		   
		{
            wordCount++;
        }
        i++;
    }

    printf("Total number of words: %d\n", wordCount);
    return 0;
}
