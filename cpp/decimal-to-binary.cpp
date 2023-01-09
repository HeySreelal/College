#include <iostream>
using namespace std;

class DecimalToBinary
{
private:
    int n;

public:
    void read()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void display()
    {
        int binary[32];
        int i = 0;
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }
        cout << "Binary: ";
        for (int j = i - 1; j >= 0; j--)
        {
            cout << binary[j];
        }
    }
};

int main()
{
    DecimalToBinary d;
    d.read();
    d.display();
    return 0;
}