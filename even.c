//Even-Odd
#include <stdio.h>
int main() {
    int n;
    printf("Enter the weight of the cake: ");
    scanf("%d", &n);
if (n % 2 == 0 && n !=2) {
        printf("YES") ;
    } else {
       printf( "NO");
    }
    return 0;
}

