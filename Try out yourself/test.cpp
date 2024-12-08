#include <iostream>
using namespace std;

int main()
{

    int inp;
    cout << "enter a number :";
    cin >> inp;

    for (int row = 0; row < inp; row = row + 1)
    {

        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << col + 1 << " ";
        }

        cout << endl;
    }
}