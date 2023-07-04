#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    bool ans = isSorted(arr, size);
    ans ? cout << "Array is Sorted " : cout << "Array is not Sorted" << endl;
    return 0;
}