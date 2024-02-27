// write a program to perforn the selection sort without function and estimate time complexity

#include<stdio.h>
int main() { 
    int  n,arr[100], i, j, min,temp; 
    printf("Enter total number of integers : ");
    scanf("%d", &n);   
    for (i=0; i < n; i++) 
        {printf("Enter integer %d: ", i+1);
        scanf("%d", &arr[i]);}
    printf("\nGiven array is: \n");    
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);
    for(i=0;i<n;i++)
    {for(j=0;j<n-1;j++)
    {if(arr[j]>arr[j+1])
    {temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;}}}
    printf("\nSorted array is: \n");    
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);    
	printf("\nTime Complexity : O(n^2)");
    return 0; 
}











































































// for(i=0; i < n-1; i++)   
    // {min = i;                       
    //  for(j = i+1; j < n; j++)      
    //   if(arr[j] < arr[min])  
    //      min = j;      
    //  int temp = arr[i];
    //  arr[i] = arr[min];
    //  arr[min] = temp;
    // }