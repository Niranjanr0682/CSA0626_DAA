// Write a program to find the reverse of a given number using recursive.

#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    }

    int lastDigit = num % 10;
    reversedNum = (reversedNum * 10) + lastDigit;

    return reverseNumber(num / 10, reversedNum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num, 0);

    printf("The reverse of %d is: %d\n", num, reversedNum);

    return 0;
}


