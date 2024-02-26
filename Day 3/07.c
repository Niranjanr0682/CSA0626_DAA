// Write a program for the given pattern using recursion
//     If n=4                                1
//                                           1   2
//                                           1   2    3
//                                           1   2    3    4

#include <stdio.h>

void printPattern(int n, int i, int j) {
    if (i > n) {
        return;
    }

    if (j <= i) {
        printf("%d ", j);
        printPattern(n, i, j + 1);
    } else {
        printf("\n");
        printPattern(n, i + 1, 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printPattern(n, 1, 1);
    return 0;
}

