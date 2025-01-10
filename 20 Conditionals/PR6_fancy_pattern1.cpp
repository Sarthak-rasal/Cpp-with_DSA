#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    // upper part
    for (int row = 0; row < n; row = row + 1)
    {

        // triangle pattern
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << row + 1;
            if (col != row)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    // Lower part
    for (int row = 0; row < n; row = row + 1)
    {

        // triangle pattern
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << n - row;

            if (col != n - row - 1)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}