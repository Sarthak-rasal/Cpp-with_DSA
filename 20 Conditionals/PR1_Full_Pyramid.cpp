#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;

    // outer loop for n number of rows
    for (int row = 0; row < n; row = row + 1)
    {
        // inner loop for spaces with the formula n - row - 1
        // spaces = number of total rows - row we are in - 1
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // inner loop for stars with the formula row +1
        // stars = row we are in +1
        for (int col = 0; col < row + 1; col = col + 1)
        {
            // there is space after each star for it to be a triangle
            cout << "* ";
        }
        cout << endl;
    }
}