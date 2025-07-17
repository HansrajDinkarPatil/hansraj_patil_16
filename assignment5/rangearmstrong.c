#include<stdio.h>
void main()
{
	int num, i, temp, sum, count;

    printf("Enter the number  ");
    scanf("%d", &num);

    printf("Armstrong numbers %d are:\n", num);

    for(i = 1; i <= num; i++)
	 {
        temp = i;
        sum = 0;

        
        count = 0;
        int temp2 = temp;
        while(temp2 != 0)
		 {
            count++;
            temp2 = temp2 / 10;
        }

        temp = i;
        while(temp != 0)
		 {
             temp % 10;
            sum +=(count);  
            temp = temp / 10;
        }

        if(sum == i) 
		{
            printf("%d ", i);
        }
    }
}