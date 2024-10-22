#include <stdio.h>
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (1 <= A && A <= 1000000 && 1 <= B && B <= 1000000) {
        int X = A + B;
        int Y = A * B;
        printf("%d %d\n", X, Y);
    }
    return 0;
}
