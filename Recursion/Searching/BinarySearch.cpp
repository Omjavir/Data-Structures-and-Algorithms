#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int start, int end, int size, int target)
{
    // base case
    if (size == 0)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return true;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, size - 1, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, size - 1, target);
    }
}

int main()
{
    int arr[10] = {4, 6, 8, 10, 12, 15, 19, 21, 22, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 242;
    int ans = binarySearch(arr, 0, size, size, target);
    cout << "Ans : " << ans << endl;
    return 0;
}