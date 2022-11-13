#include <iostream>
using namespace std;

class Fibonacci
{
private:
    int n, t1 = 0, t2 = 1, t3;

public:
    void read()
    {
        cout << "Enter number: ";
        cin >> n;
    }

    void display()
    {
        cout << "Fibonacci series: " << t1 << ", " << t2 << ", ";
        for (int i = 3; i <= n; i++)
        {
            t3 = t1 + t2;
            cout << t3 << ", ";
            t1 = t2;
            t2 = t3;
        }
    }
};