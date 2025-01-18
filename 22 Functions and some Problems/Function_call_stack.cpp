#include <iostream>
using namespace std;

int maxx(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    else
    {
        return b;
    }
}
int main()
{
    int a = 1;
    int b = 2;

    cout << maxx(a, b);
    // A value of 2 was returned by the function maxx
    return 0; // Main returns to operating system
}