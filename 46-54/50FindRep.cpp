#include <iostream>
using namespace std;
// leet first repeating element

class solution
{
public:
    int firstRepeated(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            bool isRepeated = false;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    isRepeated == true;
                    return i + 1;
                }
            }
        }
    }
}