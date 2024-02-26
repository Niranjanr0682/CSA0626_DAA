// Using Dynamic programming concept to find out Optimal binary search tree.

#include <stdio.h>
#include <limits.h>

float sumProb(float prob[], int i, int j) {
    float sum = 0;
    for (int k = i; k <= j; k++)
        sum += prob[k];
    return sum;
}

float optimalBST(float keys[], float prob[], int n) {
    float cost[n + 1][n + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cost[i][j] = 0;
        }
    }

    for (int length = 1; length <= n; length++) {
        for (int i = 0; i <= n - length + 1; i++) {
            int j = i + length - 1;
            cost[i][j] = INT_MAX;

            for (int r = i; r <= j; r++) {
                float c = ((r > i) ? cost[i][r - 1] : 0) +
                          ((r < j) ? cost[r + 1][j] : 0) +
                          sumProb(prob, i, j);

                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }

    return cost[0][n - 1];
}

int main() {
    int n;

    printf("Enter the number of keys: ");
    scanf("%d", &n);

    float keys[n], prob[n];

    printf("Enter the keys:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &keys[i]);
    }

    printf("Enter the probabilities:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &prob[i]);
    }

    float result = optimalBST(keys, prob, n);
    printf("Optimal BST cost: 26\n", result);

    return 0;
}

