#include <iostream>
using namespace std;

class Grade
{
private:
    int marks;

public:
    void readMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayGrade()
    {
        if (marks >= 90)
        {
            cout << "Grade A" << endl;
        }
        else if (marks >= 80)
        {
            cout << "Grade B" << endl;
        }
        else if (marks >= 70)
        {
            cout << "Grade C" << endl;
        }
        else if (marks >= 60)
        {
            cout << "Grade D" << endl;
        }
        else if (marks >= 40)
        {
            cout << "Grade E" << endl;
        }
        else
        {
            cout << "Grade F" << endl;
        }
    }
};

int main()
{
    Grade obj;
    obj.readMarks();
    obj.displayGrade();
    return 0;
}