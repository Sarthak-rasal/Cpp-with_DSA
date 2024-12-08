#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your number :";
    cin >> n;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // inner loop
        for (int j = 0; j < n; j++)
        {
            // ******
            // *   *
            // *  *
            // * *
            // **
            // *
            // print * when 1st row or 1st column and
            // when colnum = row - i - 1
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}