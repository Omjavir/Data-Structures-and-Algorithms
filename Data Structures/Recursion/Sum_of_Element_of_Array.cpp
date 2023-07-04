#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    return arr[size - 1] + sumOfArray(arr, size - 1);
}

/*
int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
*/

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sumOfArray(arr, size);
    cout << "Ans : " << ans << endl;
    return 0;
}