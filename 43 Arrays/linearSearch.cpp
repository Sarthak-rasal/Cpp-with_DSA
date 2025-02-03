#include <iostream>
using namespace std;

bool findArr(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    // do not use else here cause then if the if statement is false it will go to else statement to return false without checking other elements
    // The problem is that if the first element does not match the key, the function returns false immediately, without checking the remaining elements.
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Enter the key to find: " << endl;
    int key;
    cin >> key;

    if (findArr(arr, size, key))
    {
        cout << "Key found";
    }
    else
    {
        cout << "Key not found";
    }

    return 0;
}