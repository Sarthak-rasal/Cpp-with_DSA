#include <iostream>
using namespace std;

int main()
{
    // using swith case instead of multiple if's
    int val;
    cout << "Enter a value :";
    cin >> val;

    switch (val)
    {
    case 1:
        cout << "Case 1";
        break;

    case 2:
        cout << "Case 2";
        break;

    case 3:
        cout << "Case 3";
        break;

    case 4:
        cout << "Case 4";
        break;

    default:
        cout << "Default case";
    }
}