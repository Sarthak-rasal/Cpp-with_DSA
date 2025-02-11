#include <iostream>
#include <vector>

using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols)
{

    // row wise sum so we will use row wise traversal
    cout << "Printing row wise sum : " << endl;
    // R W traversal
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        // cout statement will be here because we have to print sum for each row and then
        //  move on to the next row where sum again becomes 0 and we print sum again.
        cout << sum << endl;
    }
}

int main()
{

    int crr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Enter the elements to put in a 2D array ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> crr[i][j];
        }
    }

    // printing row-wise
    // outer loop
    cout << "printing array crr :";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {

        // inner loop
        for (int j = 0; j < 3; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

    printRowWiseSum(crr, rows, cols);
}