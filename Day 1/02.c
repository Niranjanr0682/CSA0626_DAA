// Write a program to check the given no is Armstrong or not using recursive function.

#include<stdio.h>  
int isArmstrong(int num)
    {int r, sum = 0, temp = num;    
    while (num > 0) 
        {r = num % 10;    
        sum += (r * r * r);    
        num = num / 10;}    
    return temp == sum;}

int main()
    {int n;
    printf("Enter an integer to check for Armstrong number: ");    
    scanf("%d", &n);
    if (isArmstrong(n))
        {printf("Given number %d is an Armstrong number.\n", n);}
    else
        {printf("Given number %d is not an Armstrong number.\n", n);}
    return 0;}
