#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    cout << a++; // (5) output will be 5 as 'a' is used first and the incremented
    cout << ++a; // (7) output will be 6 (7 here cause of the above statement)
    //-as the value will be added first then used
}