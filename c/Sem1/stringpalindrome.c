#include <stdio.h>
#include <string.h>
int main()
{
        char str[100];
        int i, j, len, flag = 0;
        printf("Enter the stirng\n");
        gets(str);
        j = strlen(str);

            len = j;
        for(i=0;i<len/2;i++,j--)
        {
                if(str[i]!=str[j-1])
                {
                        flag = 1;
                        break;
                }
        }
        if(flag==1)
                printf("Not a palindrome\n");
        else
                printf("Palindrome\n");
        return 0;
}
