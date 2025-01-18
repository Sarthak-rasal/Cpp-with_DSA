#include <iostream>
using namespace std;

// Function
void printName()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Sarthak" << endl;
    }
}

int main()
{
    // function call
    printName();
    return 0;
}