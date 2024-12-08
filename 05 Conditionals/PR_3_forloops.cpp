#include <iostream>
using namespace std;

int main()
{

    // initialize variable ; condition; update;
    for (int i = 0; i < 3; i = i + 1)
    {
        cout << "hello bhai" << endl;
    }

    for (int a = 0; a < 5; a = a + 1)
    {
        cout << a << endl;
    }
    for (int e = 1; e <= 10; e = e + 1)
    {
        cout << e * 2 << endl;
    }
    for (int d = 1; d < 2049; d = d * 2)
    {
        cout << d << endl;
    }

    // another method

    // for (int x= 0; x< 5; x= x+ 1)
    //{
    //    cout << "hello bhai" << endl;
    // }
    int x = 0;
    for (;;)
    {
        if (x < 5)
        {
            cout << x << endl;
            x = x + 1;
        }
    }
}