// write a program to check for the perfect number

#include<stdio.h>
int main()
{int n,sum=0,temp,i;
printf("enter number to check for perfect number :");
scanf("%d",&n);
temp = n;
for (i=1;i<=n/2;i++)
{if(n%i==0)
{sum+=i;}}
if (sum==temp)
  printf("\n %d is a perfect number.",n);
else
printf("\n %d is not a perfect number.",n);
return 0;}

