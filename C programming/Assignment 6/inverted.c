#include <stdio.h>

void printInvertedTriangle(int n)
{
    for(int i = n; i >= 1; i--)  
    {
        for(int j = 1; j <= i; j++)  
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    printInvertedTriangle(n);
    return 0;
}
