// Condition and patterns
#include <iostream>
using namespace std;

int main()
{
    // declaring int variable
    int score;
    // print enter your name
    cout << "enter the score " << endl;
    // taking input
    cin >> score;
    // if statement
    if (score < 300)
    {
        cout << "India wins" << endl;
    }
    // else statement
    else
    {
        cout << "India losses" << endl;
    }
}