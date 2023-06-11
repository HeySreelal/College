#include <iostream>
using namespace std;

class Bubble
{
    int arr[100], n, i, j;

    void swap(int *p, int *q)
    {
        int t = *p;
        *p = *q;
        *q = t;
    }

public:
    void read()
    {
        cout << "Enter the size: ";
        cin >> n;
        cout << "Enter the items: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void sort()
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }

    void display()
    {
        cout << "Sorted array is: " << endl;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Bubble bubble;
    bubble.read();
    bubble.sort();
    bubble.display();
}