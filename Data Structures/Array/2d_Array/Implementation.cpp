#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][3], int row, int col)
{
    cout << "Printing sum row wise : " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum : " << sum << endl;
    }
    cout << endl;
}

void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing sum col wise : " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum : " << sum << endl;
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum row sum is " << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // // ** Taking input row vise
    cout << "Enter the input arrays : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // // ** Taking input col vise
    // cout << "Enter the input arrays : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // // ** Printing the arrays
    // cout << "Output array : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // ** Linear Search of 2d Arrays
    // cout << "Enter the Element you want to search for  : " << endl;
    // int target;
    // cin >> target;
    // if (isPresent(arr, target, 3, 3))
    // {
    //     cout << "Element Found " << endl;
    // }
    // else
    // {
    //     cout << "Emenent not Found " << endl;
    // }

    // ** Printing the som of row wise array
    // printRowSum(arr, 3, 3);
    // printColSum(arr, 3, 3);

    // ** Printing the maximum sum of row with index
    int ans = largestRowSum(arr, 3, 3);
    cout << "Maximum sum of row with index : " << ans << endl;
    return 0;
}