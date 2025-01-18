#include <iostream>
using namespace std;

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int a;
    cout << "Enter the 1st num: ";
    cin >> a;

    int b;
    cout << "Enter the 2nd num: ";
    cin >> b;

    int sum = add(a, b);

    cout << "The sum of these numbers is: " << sum << endl;
    return 0;
}
