// Write a c program to perform Bubble sort

#include <stdio.h>
void swap(int *xp, int *yp)
    {int temp = *xp;
    *xp = *yp;
    *yp = temp;}

void bubbleSort(int arr[], int n) 
    {for (int i = 0; i < n - 1; i++) 
        {for (int j = 0; j < n - i - 1; j++) 
            {if (arr[j] > arr[j + 1]) 
                {swap(&arr[j], &arr[j + 1]);}}}}

void printArray(int arr[], int size)
    {for (int i = 0; i < size; i++)
        {printf("%d ", arr[i]);}
    printf("\n");}

int main()
    {int n,arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        {printf("Enter element [%d]", i);
        scanf("%d", &arr[i]);}
    printf("Unsorted array: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;}
