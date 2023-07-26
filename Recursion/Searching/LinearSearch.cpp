#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    // base case
    if (size == 0)
        return false;

    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, target);
    }
}

int main()
{
    int arr[5] = {4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int ans = linearSearch(arr, size, target);
    cout << "Ans : " << ans << endl;
    return 0;
}