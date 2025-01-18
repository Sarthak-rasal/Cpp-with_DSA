#include <iostream>
using namespace std;

// Printing a number requires no return value so we use a void function

void printCounting(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << " Enter the num :";
    cin >> n;

    printCounting(n);
    return 0;
}