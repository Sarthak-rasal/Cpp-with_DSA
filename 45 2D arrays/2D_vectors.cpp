#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr;

    // outer vector will always push vector<int> type of data

    vector<int> a{1, 2, 3};
    vector<int> b{2, 3, 4, 5};
    vector<int> c{1, 3};

    // arr means pushing in outer vector which only takes in v<int>
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {

        // for(int j =0 ; j<arr[0].size(); j++); can use this if there are equal numbers of rows
        //  as there will always be a 0 rows and we are taking its size as columns size too

        // therefore we will take i as we will print number equal to its particular row

        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row = 3;
    int col = 4;

    vector<vector<int>> brr(row, vector<int>(col, 0));

    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}