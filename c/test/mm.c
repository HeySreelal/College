#include <stdio.h>

int main() {
    // multiplication of two matrices
    int n, m, p, q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &n, &m);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (m != p) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }
    int a[n][m], b[p][q], c[n][q];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the matrices is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}