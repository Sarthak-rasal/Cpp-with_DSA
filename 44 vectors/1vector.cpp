#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // create a vector
    vector<int> arr;

    // default size of vector comes out to be zero
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove
    arr.pop_back();

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //
    int n;
    cout << "enter the n ";
    cin >> n;
    // initialising a vector with -222 capacity of size n
    vector<int> brr(n, -222);

    cout << "Size of b " << brr.size() << endl;
    cout << "Capacity of b " << brr.capacity() << endl;

    // print
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    cout << "Printing crr ";

    vector<int> crr{10, 20, 30, 40, 50, 60};
    // print
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    cout << "Vector crr is Empty or not" << crr.empty() << endl;

    vector<int> drr;
    cout << "Vector crr is Empty or not" << drr.empty() << endl;

    return 0;
}