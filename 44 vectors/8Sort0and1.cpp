#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr{1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1};
    // start at 0 to insert 0s first and move forwards
    int start = 0;
    // end at the end of array ready to insert 1 and move backwards
    int end = arr.size() - 1;
    // i to iterate through the array to check and transfer the elements to start or end
    int i = 0;

    // while i does not reach end we will continue to run if and else

    while (i != end)
    {
        // if 1st element that is on index 0 is = 0
        if (arr[i] == 0)
        {
            // swap the start pointer with i pointer and
            swap(arr[start], arr[i]);
            // i and start will move forward
            start++;
            // i will move forward because it is leaving behind 0s
            i++;
        }
        // else there is only one digit here that is 1
        else
        {
            // if 1 is found swap it to end and
            swap(arr[end], arr[i]);
            // move back from end
            end--;
            // we will not move forward from i as we have to check again which element was swapped from the end
            // i will only move if we get 0 cause it leaves behind 0s
        }
    }

    // printing
    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}