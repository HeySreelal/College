#include <iostream>
using namespace std;

class Operations
{
private:
    int a, b;
    char op;

public:
    void readNumbers()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void readOperator()
    {
        cout << "Enter operator: ";
        cin >> op;
    }

    void calculate()
    {
        switch (op)
        {
        case '+':
            cout << "Sum is " << a + b << endl;
            break;
        case '-':
            cout << "Difference is " << a - b << endl;
            break;
        case '*':
            cout << "Product is " << a * b << endl;
            break;
        case '/':
            cout << "Quotient is " << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
        }
    }
};