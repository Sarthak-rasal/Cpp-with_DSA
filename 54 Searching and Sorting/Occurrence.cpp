#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstOcc(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;

    while (start <= end)
    {
        // if mid is the target we search if there are any occurrence
        // of target in left storing the index
        if (v[mid] == target)
        {
            index = mid;
            end = mid - 1;
        }
        // if mid element is smaller we move right
        else if (v[mid] < target)
        {
            start = mid + 1;
        }

        // if mid element is greater than target we move left
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return index;
}

using namespace std;

int main()
{
    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 8};
    int target = 4;

    int indexOfFirstOcc = firstOcc(v, target);

    cout << "First occurrence is at " << indexOfFirstOcc << endl;
    // Using STLs
    auto firstOc = lower_bound(v.begin(), v.end(), target);
    cout << " Ans 2 is " << firstOc - v.begin() << endl;

    auto lastOcc = upper_bound(v.begin(), v.end(), target);
    cout << " Ans 2 is " << lastOcc - v.begin() << endl;

    int totalOcc = lastOcc - firstOc;

    cout << " Total Occurrences are : " << totalOcc << endl;

    return 0;
}