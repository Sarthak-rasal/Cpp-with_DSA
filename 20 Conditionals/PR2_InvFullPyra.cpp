#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input a number :";
    cin >> n;
    for (int row = 0; row < n; row++)
    {

        // spaces = rows
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Stars = n-rows
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}