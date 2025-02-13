#include <iostream>
#include <vector>
#include <algorithm> //required for swap

using namespace std;

int main()
{

    // counting method
    int zero, one, two;
    zero = one = two = 0;

    vector<int> num{1, 2, 1, 0, 2, 2, 1, 0, 0, 1};

    cout << "UnSorted numbers are : " << endl;

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == 0)
        {
            zero++;
        }
        else if (num[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    // spread
    int i = 0;
    while (zero--)
    {
        num[i] = 0;
        i++;
    }
    while (one--)
    {
        num[i] = 1;
        i++;
    }
    while (two--)
    {
        num[i] = 2;
        i++;
    }

    cout << "Sorted numbers are (counting method) : " << endl;

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    // 3 pointer approach
    int l = 0, m = 0, h = num.size() - 1;

    while (m <= h)
    {
        if (num[m] == 0)
        {
            swap(num[l], num[m]);
            l++;
            m++;
        }
        else if (num[m] == 1)
        {
            m++;
        }
        else
        {
            swap(num[m], num[h]);
            h--;
        }
    }

    cout << "Sorted numbers are (3 pointer approach) : " << endl;

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
}