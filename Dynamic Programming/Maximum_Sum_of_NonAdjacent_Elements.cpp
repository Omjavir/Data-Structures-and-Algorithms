// https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h>

// *** Recursion + Memoization
int Maxi(vector<int> &nums, int n, vector<int> &dp)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return nums[0];
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int Exclude = Maxi(nums, n - 2, dp) + nums[n];
    int Include = Maxi(nums, n - 1, dp);

    dp[n] = max(Exclude, Include);
    return dp[n];
}

int maximumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    return Maxi(nums, n - 1, dp);
}
// Time complexity : O(n);
// space complexity : O(n) + O(n) = O(n);

// *** Tabulation
int MaxiTabulation(vector<int> &nums)
{
    int n = nums.size();

    int prev2 = 0;
    int prev1 = nums[0];

    for (int i = 1; i < n; i++)
    {
        int Include = prev2 + nums[i];
        int Exclude = prev1 + 0;

        int ans = max(Exclude, Include);
        prev2 = prev1;
        prev1 = ans;
    }

    return prev1;
}
// Time complexity : O(n);
// space complexity : O(1);