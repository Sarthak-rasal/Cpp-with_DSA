#include <iostream>
using namespace std;
#include <vector>

void wavePrint(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();
    for (int startCol = 0; startCol < row; startCol++)
    {
        // even no of col == top to bottom .
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < col; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        else
        {
            for (int i = col - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},

    };

    wavePrint(v);

    return 0;
}