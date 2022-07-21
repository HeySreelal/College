#include <stdio.h>

int main() {
    // find prime numbers between limits
    int n, m, i, j, k, l, flag;
    printf("Enter the lower limit: ");
    scanf("%d", &n);
    printf("Enter the upper limit: ");
    scanf("%d", &m);
    for (i = n; i <= m; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
    }
}