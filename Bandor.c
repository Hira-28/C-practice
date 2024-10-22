#include <stdio.h>

int main() {
    int T, W;
    scanf("%d %d", &T, &W);

    if (T > 2000) {
        printf("Bandor, these bananas are tasty enough.\n");
    } else if (T > 0 && T <= 2000 && W > 100) {
        printf("Bandor, these bananas are tasty enough.\n");
    } else {
        printf("No Bandor, bananas are not tasty enough.\n");
    }

    return 0;
}
