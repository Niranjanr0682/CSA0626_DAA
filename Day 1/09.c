// Write a C program for calculating time complexity for multiply two Matrix

#include <stdio.h>

#define N 3 // Size of the matrices (you can change it)

void multiplyMatrix(int mat1[][N], int mat2[][N], int result[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N];

    multiplyMatrix(mat1, mat2, result);

    printf("Matrix 1:\n");
    printMatrix(mat1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2);

    printf("\nResult Matrix:\n");
    printMatrix(result);

    return 0;
}
