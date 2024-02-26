// Write a c program for knapsack problem using dynamic programming

#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int capacity, int weights[], int values[], int numItems) {
    int i, w;
    int dp[numItems + 1][capacity + 1];

    for (i = 0; i <= numItems; i++) {
        for (w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[numItems][capacity];
}

int main() {
    int numItems, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    int weights[numItems], values[numItems];

    printf("Enter the weights of items:\n");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &weights[i]);
    }

    printf("Enter the values of items:\n");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &values[i]);
    }

    printf("Enter the knapsack capacity: ");
    scanf("%d", &capacity);

    int maxValue = knapsack(capacity, weights, values, numItems);
    printf("Maximum value in the knapsack: %d\n", maxValue);

    return 0;
}
