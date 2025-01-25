#include <iostream>
using namespace std;

long long int factorial(long long int n)
{
    long long int num = 1;
    for (int i = 1; i <= n; i++)
    {
        num = num * i;
    }
    return num;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    long long int num = factorial(n);
    cout << "Factorial of " << n << " is " << num;
}