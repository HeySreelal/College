#include <stdio.h>
int main() {
    // Problem: Read & Print a matrix.
    // Input: A matrix.
    // Output: The matrix.
    
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of the matrix are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        } 
        printf("\n");
    }
    return 0;
}