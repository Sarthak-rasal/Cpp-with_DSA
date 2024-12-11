#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;

    // outer loop
    for (int row = 0; row < n; row = row + 1)
    {

        // spaces
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // For character pattern loop
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            // for 1st star
            if (col == 0)
            {
                cout << "*";
            }
            // last star
            // The last character is always total chr in the col -1
            else if (col == 2 * row)
            {
                cout << "*";
            }
            // By using OR operator
            // if(col == 0 || col == 2 * row )
            //     cout << "*";

            // spaces in bet
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Pattern which is below
    // outer loop
    for (int row = 0; row < n; row = row + 1)
    {
        // Spaces
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        // Character patter
        for (int col = 0; col < 2 * n - 2 * row - 1; col = col + 1)
        {

            // if first or last character (this tim using OR operator)
            // The last character is always total chr in the col -1

            if (col == 0 || col == 2 * n - 2 * row - 2)
            {

                cout << "*";
            }
            // spaces leftover
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
