#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "Sarthak" << endl;
        break;
    }
    cout << "Rasal";

    for (int i = 0; i < n; i++)
    {
        // continue; // will print nothing
        cout << "Hello" << endl;
        continue;
    }
}