#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number less than 9: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int startNumIndex = 8 - i;
        int num = i + 1;
        int countNum = num;
        for (int j = 0; j < 17; j++)
        {
            if (j == startNumIndex && countNum > 0)
            {
                cout << num;
                startNumIndex += 2;
                countNum--;
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
