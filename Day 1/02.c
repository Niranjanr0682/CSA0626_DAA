// Write a program to check the given no is Armstrong or not using recursive function.

#include <math.h>

int isArmstrong(int num) {
    int n = log10(num) + 1;
    if (num == 0)
        return 0;
    int sum = 0;
    for (int i = num % 10; i > 0; i /= 10) {
        sum += pow(i, n);
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}