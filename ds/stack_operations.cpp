#include <iostream>
using namespace std;

class Stack
{
    int arr[100], top, n;

public:
    Stack()
    {
        top = -1;
        cout << "Enter the size: ";
        cin >> n;
    }
    void push(int item)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = item;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
            return NULL;
        }

        return arr[top--];
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Stack items are: " << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void readAndPush()
    {
        cout << "Enter an item to push to stack: ";
        int it;
        cin >> it;
        push(it);
    }

    void popHelper()
    {
        int data;
        data = pop();
        if (data != NULL)
        {
            cout << data << "is popped!";
        }
    }
};

int main()
{
    Stack st;
    int option;
    char repeat;
    do
    {
        cout << "Menu: \n\n1. Push\n2. Pop\n3. Display\n\nChoose an option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            st.readAndPush();
            break;
        case 2:
            st.popHelper();
            break;
        case 3:
            st.display();
            break;
        default:
            cout << "Unknown option!";
        }
        cout << endl;

        cout << "\nDo you want to repeat: (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    cout << endl;
}