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
        // Inner loop
        // number of stars = sr no of rows + 1
        // if we are in row 3 (which is actually row number 4 from index 0) then ;
        // stars will be printed for 0 column /1st column /2nd column /3rd column and /4th column /
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}