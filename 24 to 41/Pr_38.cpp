#include <iostream>
using namespace std;

// Function to check if a number is prime
bool checkPrime(int n)
{
    if (n < 2)
        return false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // If divisible, it's not prime
        }
    }
    return true; // If no divisor found, it's prime
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i)) // Proper condition check
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
