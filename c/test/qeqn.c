#include <stdio.h>
int main()
{
    int a, i, j;
    printf("enter a number myre: ");
    scanf("%d", &a);
    for (j = 1; j <= a; j++)
    {
        long int prdct=1;
        for (i = 1; i <= j; i++)
        {
            prdct = prdct * i;
        }
        printf("#%d - sum is : %ld\n", j,prdct);
    }
    return 0;
}
