#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int sizea;
    cout << "Enter the size of first array : ";
    cin >> sizea;

    int arr1[sizea];

    cout << "Enter first array :";
    for (int i = 0; i < sizea; i++)
    {
        cin >> arr1[i];
    }

    int sizeb;
    cout << "Enter the size of second array : ";
    cin >> sizeb;

    int arr2[sizeb];

    cout << "Enter second array :";
    for (int i = 0; i < sizeb; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans;

    // push all element in vector from arr1

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr1[i]);
    }

    // push all element in vector from arr2

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr2[i]);
    }

    cout << "The union of arrays is :" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}