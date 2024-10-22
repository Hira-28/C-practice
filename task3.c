#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        long long n, k;
        int steps = 0;
        scanf("%lld %lld", &n, &k);
        while (n > 0) {
            if (n % k == 0) {
                n /= k;
            } else {
                n--;
            }
            steps++;
        }
        printf("%d\n", steps);
    }
    return 0;
}
