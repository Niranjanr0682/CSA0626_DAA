// Write a C program for calculating time complexity for multiply two Matrix

#include <stdio.h>
void multiplyMatrix(int mat1[][100], int mat2[][100], int result[][100], int size)
    {for (int i = 0; i < size; i++)
        {for (int j = 0; j < size; j++) 
            {result[i][j] = 0;
            for (int k = 0; k < size; k++) 
                {result[i][j] += mat1[i][k] * mat2[k][j];}}}}

void printMatrix(int mat[][100], int size)
    {for (int i = 0; i < size; i++)
        {for (int j = 0; j < size; j++) 
            {printf("%d ", mat[i][j]);}
        printf("\n");}}

int main() 
    {int mat1[100][100],mat2[100][100], result[100][100], size;

    printf("Enter the size of the matrices: ");
    scanf("%d", &size);

    printf("\nEnter elements for Matrix 1:\n");
    for (int i = 0; i < size; i++)
        {for (int j = 0; j < size; j++)
            {printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);}}

    printf("\nEnter elements for Matrix 2:\n");
    for (int i = 0; i < size; i++)
        {for (int j = 0; j < size; j++)
            {printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);}}

    multiplyMatrix(mat1, mat2, result, size);
    printf("\nMatrix 1:\n");
    printMatrix(mat1, size);
    printf("\nMatrix 2:\n");
    printMatrix(mat2, size);
    printf("\nResult Matrix:\n");
    printMatrix(result, size);
    return 0;}
