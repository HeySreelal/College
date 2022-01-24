#include <stdio.h>

int main() {
    // Find all prime numbers under 100

    int n, i;

    for (n = 2; n <= 1000; n++) {
        for (i = 2; i < n; i++ ) {
            if(n % i == 0) {
                break;
            }
        }

        if (i == n) {
            printf("%d ", n);
        }
    }
}