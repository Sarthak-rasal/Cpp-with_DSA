#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 7, 6, 1, 9, 5};
    int size = 7;

    int maxInt = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxInt)
        {
            maxInt = arr[i];
        }
    }

    cout << "Largest number in array is :" << maxInt << endl;
}