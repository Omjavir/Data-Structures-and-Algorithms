#include <bits/stdc++.h>
int minDiff(int n, vector<int> arr)
{

    sort(arr.begin(), arr.end());
    int diff = INT_MAX;

    for (int i = 1; i < arr.size(); i++)
    {
        diff = min(diff, arr[i] - arr[i - 1]);
    }

    return diff;
}