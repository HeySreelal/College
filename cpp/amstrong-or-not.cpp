#include <iostream>
using namespace std;

class Amstrong
{
private:
    int num, temp, rem, sum;

public:
    void readNumber()
    {
        cout << "Enter number: ";
        cin >> num;
    }

    void checkAmstrong()
    {
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
    }

    void displayResult()
    {
        if (sum == num)
        {
            cout << num << " is an Amstrong number" << endl;
        }
        else
        {
            cout << num << " is not an Amstrong number" << endl;
        }
    }
};