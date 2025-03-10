#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to avoid integer overflow we cannot use this ->(start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }

        else if (target < element)
        {
            // means target is small and we should search in left
            end = mid - 1;
        }

        else
        {
            // target is larger than element so we search in right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 5, 7, 9, 11, 16, 19};
    cout << "Array is: ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element you want to find : ";
    int target;
    cin >> target;
    int size = 8;
    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "target not found" << endl;
    }

    else
    {
        cout << "target found at index " << indexOfTarget << endl;
    }

    return 0;
}