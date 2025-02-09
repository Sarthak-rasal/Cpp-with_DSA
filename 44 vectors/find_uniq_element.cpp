#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;

    // XOR all elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter the size of array ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements(one unique element) : ";
    // taking input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // fun for uniq
    int uniqueElement = findUnique(arr);

    cout << "Unique element is :" << uniqueElement << endl;

    return 0;
}