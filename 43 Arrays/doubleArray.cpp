#include <iostream>
using namespace std;

int main()
{
    int arr[50];

    int n;
    cout << "Enter the size to be stored in an array ";
    cin >> n;
    cout << "Enter the elements to be stored in the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // printing doubles
    cout << "Doubles are : ";
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << " ";
    }

    cout << endl;

    // all elements are 1

    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }

    cout << "Converted all elements to 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}