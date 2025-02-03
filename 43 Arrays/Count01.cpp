#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0};
    int size = 16;

    int numZero = 0;
    int numOne = 0;

    // traversing the array
    for (int i = 0; i < size; i++)
    {
        // counting 0
        if (arr[i] == 0)
        {
            numZero++;
        }
        // counting 1
        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "Number of zeros are :" << numZero << endl;
    cout << "Number of one's are :" << numOne << endl;
}