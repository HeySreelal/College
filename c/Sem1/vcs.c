#include <stdio.h>

int main()
{
    char line[100];
    int spaces = 0, consonants = 0, vowels = 0, i = 0;
    int rA = 0, rE = 0, rI = 0, rO = 0, rU = 0;
    printf("Enter a line of string: ");
    gets(line);
    while (line[i] != '\0')
    {
        if (line[i] == ' ')
        {
            spaces++;
        }
        else if (
            line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' ||
            line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' ||
            line[i] == 'O' || line[i] == 'U')
        {
            vowels++;

            // Modification
            // Find the number of times each vowel is repeated
            if (line[i] == 'a' || line[i] == 'A')
                rA++;
            if (line[i] == 'e' || line[i] == 'E')
                rE++;
            if (line[i] == 'i' || line[i] == 'I')
                rI++;
            if (line[i] == 'o' || line[i] == 'O')
                rO++;
            if (line[i] == 'u' || line[i] == 'U')
                rU++;
        }
        else
        {
            consonants++;
        }
        i++;
    }

    printf("Total Vowels: %d\n A: %d, E: %d, I: %d, O: %d, U: %d\n\n", vowels, rA, rE, rI, rO, rU);
    printf("Total Consonants: %d\n", consonants);
    printf("Total Spaces: %d\n", spaces);

    return 0;
}
