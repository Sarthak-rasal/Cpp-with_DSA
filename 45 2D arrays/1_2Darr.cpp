#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // declaration
    int arr[3][3];

    // initialisation
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // access
    cout << brr[2][2] << endl;

    cout << endl;

    // printing row-wise
    // outer loop
    cout << "Row-wise printed array is :";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {

        // inner loop
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    // printing column-wise
    // outer loop
    cout << "Column-wise printed array is :";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {

        // inner loop
        for (int j = 0; j < 3; j++)
        {
            // only i and j are interchanged here
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}