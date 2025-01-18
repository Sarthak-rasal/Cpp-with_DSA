#include <iostream>
using namespace std;

void printGrade(int n)
{
    if (n >= 90)
    {
        cout << "The student secured an \"A\" Grade ";
    }
    else if (n >= 80)
    {
        cout << "The student secured a \"B\" Grade ";
    }
    else if (n >= 70)
    {
        cout << "The student secured a \"C\" Grade ";
    }
    else if (n >= 60)
    {
        cout << "The student secured a \"D\" Grade ";
    }
    else
    {
        cout << "The student secured a \"F\" Grade ";
    }
}
int main()
{

    int percent;
    cout << "Enter the Percentage that student scored out of 100 : ";
    cin >> percent;
    if (percent > 100)
    {
        cout << "Enter a valid value";
    }
    else
    {
        printGrade(percent);
    }

    return 0;
}