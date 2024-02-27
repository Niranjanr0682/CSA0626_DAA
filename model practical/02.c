// program to find the even sum of teh fibonacci series till number N 

#include<stdio.h>
int main()
{
    int n,i,n1=0,n2=1,n3=0,sum=0;
    printf("enter the n value :");
    scanf("%d",&n);
    n=n*2;
    for(i=2;i<=n;i++)
    {n3=n1+n2;
    if(i%2 == 0)
    {sum += n3;}
    n1 = n2;
    n2 = n3;
    }
   printf("the sum is %d",sum);
}