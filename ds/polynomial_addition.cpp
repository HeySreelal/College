#include <iostream>
using namespace std;

class Polynomial
{
    int exp[100], coeff[100], n;

public:
    void read()
    {
        cout << "Enter the number of terms: ";
        cin >> n;

        cout << "Now enter terms one by one" << endl;
        cout << "Enter the coefficient and exponent (Eg the term 4x^2 can be entered by typing 4 2)" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the first term now: ";
            cin >> coeff[i];
            cin >> exp[i];
        }
    }

    Polynomial add(Polynomial other)
    {
        Polynomial sum;
        int i = 0, j = 0, k = 0;
        while ((i < n) && (j < other.n))
        {
            if (exp[i] == other.exp[j])
            {
                sum.coeff[k] = coeff[i] + other.coeff[j];
                sum.exp[k] = exp[i];
                i++;
                j++;
            }
            else if (exp[i] > other.exp[j])
            {
                sum.coeff[k] = coeff[i];
                sum.exp[k] = exp[i];
                i++;
            }
            else
            {
                sum.coeff[k] = other.coeff[j];
                sum.exp[k] = other.exp[j];
                j++;
            }
            k++;
        }

        while (i < n)
        {
            sum.coeff[k] = coeff[i];
            sum.exp[k] = exp[i];
            i++;
            k++;
        }
        while (j < other.n)
        {
            sum.coeff[k] = other.coeff[j];
            sum.exp[k] = other.exp[j];
            j++;
            k++;
        }

        sum.n = k;
        return sum;
    }

    void show()
    {
        cout << "Polinomial is: " << endl;
        int i;
        for (i = 0; i < n; i++)
        {
            if (exp[i] != 0)
            {
                cout << coeff[i] << "x^" << exp[i];
                if (i != n - 1)
                {
                    cout << " + ";
                }
            }
            else
            {
                cout << coeff[i];
            }
        }
        cout << endl;
    }

    Polynomial operator+(Polynomial other)
    {
        return add(other);
    }
};

int main()
{
    Polynomial x, y, z;
    x.read();
    y.read();
    z = x + y;
    z.show();
    return 0;
}