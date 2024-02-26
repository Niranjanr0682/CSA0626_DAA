#include <stdio.h>

int main() {
    int n;
    
    // Get the number of elements in the list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is non-positive
    if (n <= 0) {
        printf("Invalid input. Please enter a valid number of elements.\n");
        return 1;  // Exit the program with an error code
    }

    int numbers[n];

    // Get the list of numbers from the user
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Print the sequence of minimum and maximum values
    for (int i = 0; i < n; i++) {
        int min = numbers[0];
        int max = numbers[0];

        // Find the minimum and maximum values for each number
        for (int j = 1; j <= i; j++) {
            if (numbers[j] < min) {
                min = numbers[j];
            }
            if (numbers[j] > max) {
                max = numbers[j];
            }
        }

        // Print the sequence for each number
        printf("For number %d: Min = %d, Max = %d\n", numbers[i], min, max);
    }

    return 0;  // Exit the program successfully
}
