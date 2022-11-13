#include <iostream>
using namespace std;

class Table
{
private:
    int num, i = 0, result;

public:
    void read()
    {
        cout << "Enter number: ";
        cin >> num;
    }

    void display()
    {
        do
        {
            result = num * i;
            cout << num << " * " << i << " = " << result << endl;
            i++;
        } while (i <= 10);
    }
};
