#include <stdio.h>
int alpha = 10;

// Return: ❌  Parameters: ❌

void oruValiyaFn()
{
    // enter two numbers and print their sum
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("%d", c);
}

// Return: ✅  Parameters: ❌

int sum2()
{
    // enter two numbers and print their sum
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    return c;
}

// Return: ✅  Parameters: ✅

int sum3(int a, int b)
{
    int c = a + b;
    return c;
}

// Return: ❌  Parameters: ✅

void sum4(int a, int b)
{
    int c = a + b;
    printf("%d", c);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    sum4(10, 20);
    int alpha = 10;
    int beta = 20;

    swap(&alpha, &beta);
}
