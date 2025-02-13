#include <iostream>
#include <vector>

using namespace std;

void moveAllNegToLeft(vector<int> &arr, int n)
{
    // dutch national flag algorithm

    int l = 0, h = n - 1;

    // if there is a negative at low
    // as we want negative at low we will move forward
    while (l < h)
    {

        if (arr[l] < 0)
        {
            l++;
        }
        // if there is a positive number at h we move back
        // as we want positive number at right.
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
            l++;
            h++;
        }
    }
}

int main()
{
    vector<int> arr = {1, -2, 3, -4, 5, -6};
    moveAllNegToLeft(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}