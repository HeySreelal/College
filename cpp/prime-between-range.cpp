#include <iostream>
using namespace std;

class Prime
{
private:
    int a, b;

public:
    void read()
    {
        cout << "Enter a, b: ";
        cin >> a >> b;
    }

    void display()
    {
        int i, j, flag;
        for (i = a; i <= b; i++)
        {
            flag = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    Prime p;
    p.read();
    p.display();
    return 0;
}