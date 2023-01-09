#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q;

public:
    void read()
    {
        cout << "Enter m, n: ";
        cin >> m >> n;
        cout << "Enter elements of matrix A: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter p, q: ";
        cin >> p >> q;
        cout << "Enter elements of matrix B: " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void display()
    {
        cout << "Matrix C: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }

    void multiply()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
};

int main()
{
    Matrix m;
    m.read();
    m.multiply();
    m.display();
    return 0;
}