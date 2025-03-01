#include <iostream>
#include <vector>
using namespace std;

void printSpiral(vector<vector<int>> matrix)
{
    vector<int> ans;
    int m = matrix.size();    // Number of rows
    int n = matrix[0].size(); // Number of columns
    int total_elements = m * n;

    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;

    int count = 0;
    while (count < total_elements)
    {
        // Print starting row (left to right)
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++; // Move down

        // Print ending column (top to bottom)
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--; // Move left

        // Print ending row (right to left)
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--; // Move up

        // Print starting column (bottom to top)
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++; // Move right
    }

    // Print the final result
    for (int num : ans)
    {
        cout << num << " ";
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {7, 8, 9, 10},
        {13, 14, 15, 16},
        {19, 20, 21, 22},
    };

    printSpiral(v);
    return 0;
}
