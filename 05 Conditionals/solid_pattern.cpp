#include <iostream>
using namespace std;
// Printing  patterns
int main()
{
    //      SOLID PATTERNS
    // Taking in inputs for columns and rows
    cout << "enter number of stars :";
    int n;
    cin >> n;
    cout << "enter number of columns :";
    int x;
    cin >> x;

    // THis is the outer loop which i used to change rows x times with space(endl)
    // Therefore this loop only has endl and is just used to change rows
    for (int row = 0; row < x; row = row + 1)
    {
        // THis is the inner loop
        // here we draw 5 stars after n stars the loop escapes and next row starts
        for (int col = 0; col < n; col += 1)
        {
            cout << "* ";
        }
        // this cout is the part of the outer loop
        cout << endl;
    }
}