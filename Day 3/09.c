// Write a program for pascal triangle.

#include <stdio.h>

void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        int coefficient = 1;

        for (int j = 0; j < numRows - i; j++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", coefficient);
            coefficient = coefficient * (i - j) / (j + 1);
        }

        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);
    printPascalTriangle(numRows);
    return 0;
}

