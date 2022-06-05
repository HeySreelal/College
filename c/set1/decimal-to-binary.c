#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int binary[100];

    int i = 0;

    for (i = 0; num > 0; i++) {
        binary[i] = num % 2;
        num = num / 2;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}