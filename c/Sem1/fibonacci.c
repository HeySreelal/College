#include <stdio.h>

int main() {
    int t1= 0, t2 = 1, t3 = 0, lim, i = 0;

    printf("Enter the limit: ");
    scanf("%d", &lim);
    while(i < lim) {
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;

        i++;
    }

}