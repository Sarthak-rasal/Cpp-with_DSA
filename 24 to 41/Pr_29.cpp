#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int c = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // Growing Phase
        {
            cout << c;
            c = c + 1;
            if (j < i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // C value here is 11 if n is 4
    // shrinking Phase
    int start = c - n; // 11-4 = 7
    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            k++;
            if (j < n - i - 1)
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}