// Write a program to inset a number in a list.

#include <stdio.h>

#define MAX_SIZE 100

void displayList(int arr[], int size) {
    printf("List of Numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertNumber(int arr[], int *size, int position, int number) {
    if (*size >= MAX_SIZE) {
        printf("Error: List is full, cannot insert more numbers.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Error: Invalid position for insertion.\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = number;
    (*size)++;

    printf("Number %d inserted at position %d.\n", number, position);
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    printf("Enter the size of the list: ");
    scanf("%d", &size);

    printf("Enter %d numbers for the list:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    displayList(arr, size);

    int number, position;
    printf("Enter the number to insert: ");
    scanf("%d", &number);

    printf("Enter the position for insertion (0 to %d): ", size);
    scanf("%d", &position);

    insertNumber(arr, &size, position, number);

    displayList(arr, size);

    return 0;
}

