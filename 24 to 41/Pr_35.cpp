#include <iostream>
using namespace std;

bool checkEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// even numbers LSB is always 0 and vise versa for odd

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    bool isEven = checkEven(n);

    if (isEven) // BY default its true
    {
        cout << n << " is Even number" << endl;
    }
    else
    {
        cout << n << " is a Odd number" << endl;
    }
}