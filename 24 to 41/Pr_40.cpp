#include <iostream>
using namespace std;

int setIth(int n, int k)
{
    int mask = 1 << k;
    int ans = n | mask;
    return mask;
}

int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    int k;
    cout << "Enter a valid k'th bit";
    cin >> k;
    int num = setIth(n, k);
    cout << "Answer is :" << num;
}