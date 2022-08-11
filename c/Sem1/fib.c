#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, t3 = 0, i = 0, l;
    printf("Enter the limit: ");
    scanf("%d", &l);
    while (i < l)
    {
        printf("%d ", t3);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        i++;
    }
    return 0;
}