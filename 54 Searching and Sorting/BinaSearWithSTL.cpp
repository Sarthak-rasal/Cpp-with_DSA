#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    if (binary_search(vec.begin(), vec.end(), 3))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << " Not found" << endl;
    }

    if (binary_search(arr, arr + size, 3))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << " Not found" << endl;
    }
}