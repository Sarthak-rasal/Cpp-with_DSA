#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;

    // outer loop
    for (int i = 0; i < n; i++)
    {
        // Inner loop
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}