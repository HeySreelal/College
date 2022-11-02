#include <stdio.h>

int main()
{
    int a, b, c, slarge;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (b > c)
        {
            slarge = b;
        }
        else
        {
            if (a > c)
            {
                slarge = c;
            }
            else
            {
                slarge = a;
            }
        }
    }
    else
    {
        if (a > c)
        {
            slarge = a;
        }
        else
        {
            if (b > c)
            {
                slarge = c;
            }
            else
            {
                slarge = b;
            }
        }
    }
}