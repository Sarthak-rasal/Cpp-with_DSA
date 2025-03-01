#include <iostream>
#include <vector>
#include <algorithm>
// leet code 287

using namespace std;
int findDublicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 11])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
}