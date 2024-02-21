// Write a c program to Print Fibonacci Series using recursion.

#include<stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return (fib(n - 1) + fib(n - 2));
}   

void main()
{
 int i,n;
 printf("Enter the number to find Fibonacci series : ");
 scanf("%d",&n);
 printf("Fibonacci series of %d numbers:\n", n);
 for (i = 0; i < n; i++)
 {
     printf("%d\t", fib(i));
 }
}

