#include <stdio.h>
int main(int argc, char *argv[])
{

    if(argc == 1) {
        printf("only program name");
        return 0;
    }
    
    printf("Total number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
