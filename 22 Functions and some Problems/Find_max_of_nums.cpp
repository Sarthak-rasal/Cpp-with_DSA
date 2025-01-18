#include <iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    cout << "Enter 3rd number : ";
    cin >> c;

    int maxnum = findMax(a, b, c);

    cout << "The greatest number of these is : " << maxnum;

    return 0;
}