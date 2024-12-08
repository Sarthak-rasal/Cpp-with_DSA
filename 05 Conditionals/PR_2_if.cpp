#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks:";
    cin >> marks;

    // Nested if else

    if (marks >= 90)
    {
        cout << "A grade";
    }
    else
    {
        if (marks >= 80)
        {
            cout << "B grade";
        }
        else
        {
            if (marks >= 70)
            {
                cout << "C grade";
            }
            else
            {
                if (marks >= 60)
                {
                    cout << "D grade";
                }
                else
                {
                    cout << "F grade";
                }
            }
        }
    }
    cout << endl;

    // using elseif

    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks >= 80)
    {
        cout << "B";
    }
    else if (marks >= 70)
    {
        cout << "C";
    }
    else if (marks >= 60)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}