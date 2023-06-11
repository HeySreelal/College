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

    Distance operator-()
    {
        Distance d;
        d.km = -km;
        return d;
    }
};

int main()
{

    Distance x;
    x.readKm();
    Distance y = -x;

    cout << "Negative kms is : " << y.km << endl;

    return 0;
}