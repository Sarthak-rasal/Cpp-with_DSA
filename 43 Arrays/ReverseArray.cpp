#include <iostream>
using namespace std;

// similar to printing extreme

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int size = 8;
    int start = 0;
    int end = size - 1;

    // start should not be more than end as we are traversing from both the sides
    while (start <= end)
    {
        // swapping start and end elements
        swap(arr[start], arr[end]);

        // incrementing and decrementing array
        start++;
        end--;
    }

    // Printing reversed array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}