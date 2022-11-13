#include <iostream>
#include <math.h>
using namespace std;

class QE
{
private:
    int a, b, c, d;
    float x1, x2;
    float real, img;

public:
    void read()
    {
        cout << "Enter a, b, c: ";
        cin >> a >> b >> c;
    }

    void display()
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Roots are real and distinct." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (d == 0)
        {
            x1 = x2 = -b / (2 * a);
            cout << "Roots are real and equal." << endl;
            cout << "x1 = x2 = " << x1 << endl;
        }
        else
        {
            real = -b / (2 * a);
            img = sqrt(-d) / (2 * a);
            cout << "Roots are complex and distinct." << endl;
            cout << "x1 = " << real << " + " << img << "i" << endl;
            cout << "x2 = " << real << " - " << img << "i" << endl;
        }
    }
};