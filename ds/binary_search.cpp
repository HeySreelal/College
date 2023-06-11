#include <iostream>
using namespace std;

class Binary
{
    int arr[100], n, item, start, end, mid;

public:
    void read()
    {
        cout << "Enter the size of the array: ";
        cin >> n;
        start = 0;
        end = n - 1;
        cout << "Enter the items: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void search()
    {
        int found = 0;
        cout << "Enter the item to be searched: ";
        cin >> item;
        do
        {
            mid = (start + end) / 2;
            if (arr[mid] == item)
            {
                cout << "Item found at " << mid << "th position" << endl;
                found = 1;
                break;
            }
            else if (item < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        } while (start <= end);

        if (!found)
        {
            cout << "Item not found" << endl;
        }
    }

    void sort()
    {
        int i, j, temp;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
};

int main()
{
    Binary binary;
    binary.read();
    binary.sort();
    binary.search();

    return 0;
}