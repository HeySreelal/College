#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char str[400], sub[400];
    int start, length;

    cout << "Enter a string: ";
    fgets(str, 400, stdin);

    cout << "Enter the start index of the substring: ";
    cin >> start;

    cout << "Enter the length of the substring: ";
    cin >> length;

    int i = start, j;
    for (j = 0; str[i] != '\0' && length > 0; i++, j++)
    {
        sub[j] = str[i];
        length--;
    }
    sub[j] = '\0';

    cout << "Substring is: " << sub;
    return 0;
}