#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number ";
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        // Triangle NO 1
        // Triangle with spaces
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // Triangle NO 2
        // Triangle with numbers and spaces in between
        int start = 1;
        // using col instead of rows because we need the rows for loop only once for the rows
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            // for first and last rows
            if (row == 0 || row == n - 1)
            {
                // Even

                if (col % 2 == 0)
                {
                    cout << start;
                    start = start + 1;
                }
                else
                {
                    // odd
                    cout << " ";
                }
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}