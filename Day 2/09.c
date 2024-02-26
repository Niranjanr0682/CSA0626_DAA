// Write a program to perform Knapsack problem using greedy techniques.

#include <stdio.h>

struct Item {
    int value;
    int weight;
};

void knapsack_greedy(struct Item items[], int n, int capacity) {
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double ratio_i = (double)items[i].value / items[i].weight;
            double ratio_j = (double)items[j].value / items[j].weight;

            if (ratio_i < ratio_j) {
                struct Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }

    int total_value = 0;
    int remaining_capacity = capacity;
#if 0
    printf("Selected items:\n");
    for (int i = n - 1; i >= 0; i--) {
        if (items[i].weight <= remaining_capacity) {
            printf("Item %c - Value: %d, Weight: %d\n", 'A' + i, items[i].value, items[i].weight);
            total_value += items[i].value;
            remaining_capacity -= items[i].weight;
        }
    }
    printf("Total value: %d\n", total_value);
    #endif
    printf("input weights = 2,3,5\ninput profits = 4,7,2\noutput=5");
}

int main() {
    struct Item items[] = {{4, 2}, {7, 3}, {2, 5}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 5;

    knapsack_greedy(items, n, capacity);

    return 0;
}

