#include <iostream>
#include <vector>

using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int key;
    cout << "Enter the number you want to find : ";
    cin >> key;

    if (findKey(brr, 3, 3, key))
    {
        cout << "true";
    }
}