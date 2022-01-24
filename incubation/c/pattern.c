#include <stdio.h>

int main() {
    // Problem: Print the following pattern depending on the value of n.
    /*
        n = 3
        Output:
        3 3 3 3 3
        3 2 2 2 3
        3 2 1 2 3
        3 2 2 2 3
        3 3 3 3 3

        n = 4
        Output:
        4 4 4 4 4 4 4
        4 3 3 3 3 3 4
        4 3 2 2 2 3 4
        4 3 2 1 2 3 4
        4 3 2 2 2 3 4
        4 3 3 3 3 3 4
        4 4 4 4 4 4 4
    */

    int matrix[4000][4000];
    int n, i, j;
    scanf("%d", &n);
    int max =  2 * n - 2;

    for (int it = 0; it < n; it++) {
        for (i = it; i <= max - it; i++) {
            for (j = it; j <= max - it; j++) {
                if (i == it || i == max - it || j == it || j == max - it) {
                    matrix[i][j] = n - it;
                }
            }
        }
    }

    // print the matrix 
    for (i = 0; i <= max; i++) {
        for (j = 0; j <= max; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}