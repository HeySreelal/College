#include <iostream>
using namespace std;

class Linear
{
    int a[100], n, item;

public:
    void read()
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        cout << "Enter items: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void search()
    {
        int found = 0;
        cout << "Enter an item to be searched: ";
        cin >> item;

        for (int i = 0; i < n; i++)
        {
            if (item == a[i])
            {
                found = 1;
                cout << "Item found at " << i << "th position." << endl;
                break;
            }
        }

        if (!found)
        {
            cout << "Item not found!" << endl;
        }
    }
};

int main()
{
    Linear linear;
    linear.read();
    linear.search();
    return 0;
}