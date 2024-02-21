// Write a program to get the largest element of an array.

#include <stdio.h>

int main() {
    int arr[100],n;
    printf("enter number of elements in array : ");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
        {printf("enter element [%d] :",i);
        scanf("%d", &arr[i]);}
    int max = arr[0];
    for(int j=1; j<n; j++)
        {if(max < arr[j])
            {max = arr[j];}}
    printf("\nLargest Element is %d\n", max);
    return 0;
}