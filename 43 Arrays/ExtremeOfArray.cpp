#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int size = 8;
    int start = 0;
    int end = size - 1;

    // start should not be more than end as we are traversing from both the sides
    while (start <= end)
    {
        // middle element for odd numbers
        if (start == end)
        {
            // print middle element once
            // can print start or end ... any of them works
            cout << arr[start] << " ";
        }
        else
        {
            // 1st element and increment by 1
            cout << arr[start] << " ";
            // last element and decrement by 1
            cout << arr[end] << " ";
        }
        // increment
        start++;
        // decrement
        end--;
    }
}