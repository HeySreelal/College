#include <stdio.h>

int main()
{
    int a, b, n, i, flag;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d", &a, &b);

    for (n = a; n <= b; n++)
    {
        flag = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("%d ", n);
        }
    }

    return 0;
}