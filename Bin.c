#include <stdio.h>
void firstFit(int groups[], int n, int capacity) {
    int bins[n];
    int binCount = 0;
    for (int i = 0; i < n; i++) {
        bins[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < binCount; j++) {
            if (bins[j] + groups[i] <= capacity) {
                bins[j] += groups[i];
                break;
            }
        }
        if (j == binCount) {
            bins[binCount] = groups[i];
            binCount++;
        }
    }
    printf("First Fit Approach :\n");
    for (int i = 0; i < binCount; i++) {
        printf("Bin %d: %d\n", i + 1, bins[i]);
    }
}
int main() {
    int groups[] = {3, 1, 6, 4, 5, 2};
    int n = 6;
    int busCapacity = 7;
    firstFit(groups, n, busCapacity);
    return 0;
}
