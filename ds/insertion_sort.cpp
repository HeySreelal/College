#include <iostream>
using namespace std;

class Insertion
{
    int arr[100], n, key;

public:
    void read()
    {
        cout << "Enter the size: ";
        cin >> n;
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void sort()
    {
        for (int i = 1; i < n; i++)
        {
            key = arr[i];
            int j = i - 1;

            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    void show()
    {
        cout << "The sorted array is: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Insertion insertion;

    insertion.read();
    insertion.sort();
    insertion.show();

    return 0;
}