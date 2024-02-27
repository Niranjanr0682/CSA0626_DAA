// program to print the sum of first n perfect number 

#include <stdio.h>
int main()
    {int n ,c =0,i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d perfect numbers:\n", n);
    while (c < n)
        {int sum = 0;
        for (int j = 1; j < i; j++)
            {if (i % j == 0)
                {sum += j;}}
        if (sum == i && i > 0)
            {printf("%d ", i);
            c++;}
        i++;}
    printf("\n");
    return 0;}
