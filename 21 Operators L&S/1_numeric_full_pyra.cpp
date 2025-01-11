#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // Spaces
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << "  ";
        }

        // Numeric pattern 1
        for (int col = 0; col < row + 1; col = col + 1)
        {

            cout << row + col + 1 << " ";
        }

        // Numeric pattern 2 reverse counting
        int start = 2 * row; // starting reverse counting from here and decrease start later
        for (int col = 0; col < row; col = col + 1)
        {
            cout << start << " ";
            start = start - 1;
        }

        cout << endl;
    }
}