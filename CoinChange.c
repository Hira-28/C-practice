#include <stdio.h>

void findMinCoins(int denominations[], int size, int amount) {
    int i;
    int totalCoins = 0; // Counter for the total number of coins used

    printf("The minimum number of coins needed to make change for %d are:\n", amount);

    for (i = 0; i < size; i++) {
        while (amount >= denominations[i]) {
            amount -= denominations[i];
            printf("%d ", denominations[i]);
            totalCoins++;
        }
    }

    if (amount != 0) {
        printf("\nRemaining amount that cannot be changed: %d\n", amount);
    } else {
        printf("\n");
    }

    printf("Total number of coins used: %d\n", totalCoins);
}

int main() {
    int denominations[] = {25, 10, 5, 1}; // U.S. coin denominations
    int size = sizeof(denominations) / sizeof(denominations[0]);
    int amount = 87; // Example amount to change

    findMinCoins(denominations, size, amount);

    return 0;
}
