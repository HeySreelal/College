#include <iostream>
using namespace std;

class VCS
{
private:
    string str;
    int vowels, consonants, spaces;

public:
    void readString()
    {
        cout << "Enter string: ";
        cin >> str;
    }

    void countVowelsConsonantsSpaces()
    {
        vowels = consonants = spaces = 0;
        int i = 0;
        while (str[i] != '\0')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else if (str[i] == ' ')
            {
                spaces++;
            }
            else
            {
                consonants++;
            }
            i++;
        }
    }

    void displayVowelsConsonantsSpaces()
    {
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "Spaces: " << spaces << endl;
    }
};

int main()
{
    VCS obj;
    obj.readString();
    obj.countVowelsConsonantsSpaces();
    obj.displayVowelsConsonantsSpaces();
    return 0;
}