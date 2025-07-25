#include <stdio.h>

void main() {
    int n, i, j, Prime;

    printf("Enter the number ");
    scanf("%d", &n);

    printf("Prime numbers  1 to %d are:\n", n);

    for(i = 2; i <= n; i++) 
	{
        Prime = 1;  

        for(j = 2; j <= i / 2; j++)
		 {
            if(i % j == 0)
			 {
                Prime = 0;  
                break;
            }
        }

        if(Prime == 1)
		 {
            printf("%d ", i);
        }
    }
}
