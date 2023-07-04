#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5] = {10, 2, 5, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElem = findMax(arr, n - 1);
    int minElem = findMin(arr, n - 1);
    cout << "Maximum Element : " << maxElem << endl;
    cout << "Minimum Element : " << minElem << endl;
    return 0;
}