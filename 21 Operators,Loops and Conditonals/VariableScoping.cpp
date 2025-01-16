#include <iostream>
using namespace std;

int GlobalVariable = 777;

int main()
{
    // declaration
    int a;
    // initialisation
    int b = 5;
    // updation
    b = 10;
    cout << GlobalVariable << endl;

    // int b = 6;// is not possible because a variable can only
    //  be declared once (variable cannot be defined)
    if (true)
    {
        // variables declared inside the if scope exists only in this loop
        int b = 15; // no errors
        cout << b << endl
             << GlobalVariable << endl;
    }
    cout << b << endl;
}