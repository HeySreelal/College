#include <iostream>
using namespace std;

class Distance
{

public:
    int km;
    void readKm()
    {
        cout << "Enter kilometers: ";
        cin >> km;
    }

    Distance operator+(Distance other)
    {
        Distance sum;
        sum.km = km + other.km;
        return sum;
    }
};

int main()
{

    Distance x;
    x.readKm();
    Distance y;
    y.readKm();
    Distance z = x + y;

    cout << "The sum is : " << z.km << "kms" << endl;

    return 0;
}
