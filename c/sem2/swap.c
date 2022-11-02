#include <stdio.h>

void reverseArray(int *ptr)
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (9 - i));
        *(ptr + (9 - i)) = temp;
    }
}

int main()
{
    int ar[10];
    printf("Enter an array of 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }

    reverseArray(ar);

    printf("The reversed array is\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}
