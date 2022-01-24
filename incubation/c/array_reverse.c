#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    // [1, 2, 3, 4, 5, 6, 7, 8, 9]
    for (i = 0; i < n; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d, a[%d] = %d\n", i, *(arr + i), n - 1 - i, *(arr + n - 1 - i));
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);

    printf("\n\n");
    return 0;
}