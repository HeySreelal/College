#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, t3 = 0, l;
    printf("Enter the limit: ");
    scanf("%d", &l);
    while (t1 < l)
    {
        printf("%d ", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    printf("\n");
    return 0;
}