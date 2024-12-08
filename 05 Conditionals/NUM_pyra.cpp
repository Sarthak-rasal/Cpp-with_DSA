#include <iostream>
using namespace std;

int main()
{
    cout << "enter number of rows :";
    int n;
    cin >> n;
    // outer loop for having n rows
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}