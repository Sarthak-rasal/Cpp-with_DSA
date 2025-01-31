#include <iostream>
using namespace std;

int main()
{

    // declaration and initialisation of an array
    int arr[10] = {2, 3, 5, 7, 67};
    // 10 integer continuous space is allocated to arr (which is of 40 bytes)
    //  you can add 10 or less than 10 elements here not more than 10
    char ar[13] = {'a', 'b', 'c'};

    // printing elements of array and the array itself

    cout << arr[0] << endl;
    for (int index = 0; index < 5; index++)
    {
        cout << arr[index] << " ";
    }

    // taking inputs from user in an array

    int ara[10];

    cout << "Enter the input values in an Array of size = 10 :" << endl;

    for (int i = 0; i < 10; i++)
    {
        // int n ;
        // cin >> n;
        // ara[i] = n;
        cin >> ara[i];
    }
    cout << "printing the values in an array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << ara[i] << " ";
    }

    return 0;
}