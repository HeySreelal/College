#include <stdio.h>

int main()
{

    FILE *fp;
    int x;
    fp = fopen("abc.txt", "w");
    fprintf(fp, "%d", 123);
    fclose(fp);
    fp = fopen("abcfhcfhcfc.txt", "r");
    do
    {
        x = getw(fp);
        printf("%d\n", x);
    } while (x != EOF);

    return 0;
}