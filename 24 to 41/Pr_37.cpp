#include <iostream>
using namespace std;

// check weather the number is divisible bet 2 and n-1
// if true then its not a prime number

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    int primeNum = checkPrime(n);

    if (primeNum == true)
    {
        cout << "The number " << n << " is a Prime number";
    }
    else
    {
        cout << "The number " << n << " is not a Prime number";
    }
}