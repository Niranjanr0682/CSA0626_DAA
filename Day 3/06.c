// Write a program to perform a travelling salesman problem using dynamic programming

#include <stdio.h>
#include <limits.h>

#define MAX 10

int numCities;
int graph[MAX][MAX];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int mask, int pos) {
    if (mask == (1 << numCities) - 1) {
        return graph[pos][0]; 
    }

    int minCost = INT_MAX;

    for (int nextCity = 0; nextCity < numCities; nextCity++) {
        if ((mask & (1 << nextCity)) == 0) {
            int newCost = graph[pos][nextCity] + tsp(mask | (1 << nextCity), nextCity);
            minCost = min(minCost, newCost);
        }
    }

    return minCost;
}

int main() {
    printf("Enter the number of cities (maximum 10): ");
    scanf("%d", &numCities);

    printf("Enter the cost matrix for the cities:\n");

    for (int i = 0; i < numCities; i++) {
        for (int j = 0; j < numCities; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int optimalCost = tsp(1, 0);

    printf("The minimum cost of the Travelling Salesman Problem is: %d\n", optimalCost);

    return 0;
}

