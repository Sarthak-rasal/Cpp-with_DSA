#include <iostream>
using namespace std;

int main()
{
    int rowCount, columnCount;
    cout << "enter number of row :";
    ;
    cin >> rowCount;
    cout << "enter number of columns :";
    cin >> columnCount;
    // Hollow Rectangle
    for (int row = 0; row < rowCount; row = row + 1)
    {
        // for first and last row
        // because it is less than above
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < columnCount; col = col + 1)
            {
                cout << "* ";
            }
        }
        else
        {
            // remaining middle rows
            // first star
            cout << "* ";
            // spaces
            // -2 because 2 will be stars
            for (int i = 0; i < columnCount - 2; i = i + 1)
            {
                cout << "  ";
            }
            // last star
            cout << "* ";
        }
        cout << endl;
    }
}
