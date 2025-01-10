#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // 1st stars of half pyra
        // 2nd spaces of a full prya
        // 3rd stars of half pyra

        // 1
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }

        // 2
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {
            cout << " ";
        }

        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom half

    for (int row = 0; row < n; row = row + 1)
    {
        // 1
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "*";
        }

        // 2
        for (int col = 0; col < 2 * n - 2 * row - 1; col = col + 1)
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}