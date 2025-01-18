#include <iostream>
using namespace std;

char getGrade(int n)
{
    if (n >= 90)
    {
        return 'A';
    }
    else if (n >= 80)
    {
        return 'B';
    }
    else if (n >= 70)
    {
        return 'C';
    }
    else if (n >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
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
        char finalGrade = getGrade(percent);
        cout << "The student secured \"" << finalGrade << "\" Grade";
    }

    return 0;
}