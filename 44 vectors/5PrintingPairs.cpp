#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr{10, 20, 40, 60, 70};

    // printing all pairs
    // outer loop will traverse for each element
    for (int i = 0; i < arr.size(); i++)
    {

        // choosing elements for making pair with the elements in front
        int element = arr[i];

        // for every element , we will traverse on elements in front of the element
        //  ie we start from i+1

        for (int j = i + 1; j < arr.size(); j++)
        {
            //
            cout << "(" << element << "," << arr[j] << ")" << endl;
        }
    }
}