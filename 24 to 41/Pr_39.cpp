#include <iostream>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    // for negative we just take the mod and return the number adding the sign
    bool isNeg = false;
    if (n < 0)
    {
        isNeg = true;
        n = -n;
    }

    // for positive integers
    while (n > 0)
    {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return isNeg ? -ans : ans;
}

int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;

    int num = reverse(n);
    cout << " Reversed number is " << num;
}