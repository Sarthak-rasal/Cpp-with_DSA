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
        // Blueprint made Now we look into what to print
        {

            // for first and last rows
            if (row == 0 || row == n - 1)
            {
                // Even

                if (col % 2 == 0)
                {
                    // We have to start printing form 1 so lets create a
                    // variable that starts from 1 and counts up
                    // you should declare a variable outside the for loop
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
                // first col
                if (col == 0)
                {
                    cout << 1;
                }
                // last col was 2*row +1 so we used 2 * row +1-1
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    // middle is filled with spaces
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}