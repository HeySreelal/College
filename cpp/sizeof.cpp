#include <iostream>
using namespace std;

class SizeClass
{
public:
    int getSizeOfInt()
    {
        return sizeof(int);
    }

    int getSizeOfDouble()
    {
        return sizeof(double);
    }

    int getSizeOfChar()
    {
        return sizeof(char);
    }
};

int main()
{
    SizeClass obj;
    cout << "Size of int is " << obj.getSizeOfInt() << endl;
    cout << "Size of double is " << obj.getSizeOfDouble() << endl;
    cout << "Size of char is " << obj.getSizeOfChar() << endl;
    return 0;
}