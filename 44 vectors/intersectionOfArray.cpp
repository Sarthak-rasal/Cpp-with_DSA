#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{3, 5, 55, 69};

    vector<int> ans;

    // outer loop on arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        // for every element , run loop on brr

        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                // marking the element to avoid duplication
                // we modify the second array itself if we get same elements(eg; if we get a set of 3 we change 3 in the bellow array to -1 so if we run
                // loop on first array and 3 occurs again we wont find 3 in the second array as we have changed its value to -1 last time)
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    // print ans
    for (auto value : ans)
    {
        cout << value << " ";
    }

    cout << endl;
}