#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number :";
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }

        // characters
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            if (col == 0)
            {
                cout << "*";
            }
            else if (col == 2 * row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

        for (int row = 0; row < n; row = row + 1)
        {
            for (int col = 0; col < row; col = col + 1)
            {

                cout << " ";
            }

            for (int col = 0; col < 2 * n - 2 * row - 1; col = col + 1)
            {

                if (col == 0 || col == 2 * n - 2 * row - 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}