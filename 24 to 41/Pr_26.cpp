#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int c = 1;

        // Print spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (int col = 0; col <= row; col++)
        {
            cout << c;
            c++;
        }

        // Print decreasing numbers
        c = c - 2; // Adjusting to start decrementing correctly
        for (int col = 0; col < row; col++)
        {
            cout << c;
            c--;
        }

        cout << endl;
    }

    return 0;
}
