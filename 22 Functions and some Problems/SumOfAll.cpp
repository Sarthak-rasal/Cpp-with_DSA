#include <iostream>
using namespace std;

int getSum(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = getSum(n);

    cout << "Sum from 1 to " << n << " is " << ans << endl;

    return 0;
}