#include <bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][3], int nRows, int nCols)
{
    for (int col = 0; col < nCols; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Wave Print : " << endl;
    wavePrint(arr, 3, 3);
    return 0;
}