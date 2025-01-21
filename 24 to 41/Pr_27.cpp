#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;
        if (i < n) // Drawing Phase
        {
            cond = i;
        }
        else // shrinking phase
        {
            cond = n - (i % n) - 2;
        }
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}