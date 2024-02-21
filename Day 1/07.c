// Write a c program to perform Selection sort.

#include <stdio.h>
void selectionSort(int arr[], int n)
    {int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
        {minIndex = i;
        for (j = i + 1; j < n; j++) 
            {if (arr[j] < arr[minIndex])
                {minIndex = j;}}
        temp = arr[minIndex]; //swapping
        arr[minIndex] = arr[i];
        arr[i] = temp;}}

void printArray(int arr[], int size)
    {for (int i = 0; i < size; i++)
        {printf("%d ", arr[i]);}
    printf("\n");}

int main()
    {int n , arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        {scanf("%d", &arr[i]);}

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
