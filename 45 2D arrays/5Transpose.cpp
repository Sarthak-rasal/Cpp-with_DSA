#include <iostream>
#include <vector>

using namespace std;

void transpose(int arr[][3], int rows, int cols, int transposeArr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void PrintArry(int brr[][3], int rows, int cols)
{

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
}

int main()
{

    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rows = 3;
    int cols = 3;

    PrintArry(brr, rows, cols);
    // making new array
    int transposeArr[3][3];
    transpose(brr, rows, cols, transposeArr);

    PrintArry(transposeArr, rows, cols);
}