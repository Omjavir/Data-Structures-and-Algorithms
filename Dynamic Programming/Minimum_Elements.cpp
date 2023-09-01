// https://www.codingninjas.com/studio/problems/minimum-elements_3843091?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include <bits/stdc++.h>

int solveRecursion(vector<int> &num, int x)
{
    // base case
    if (x == 0)
    {
        return 0;
    }

    if (x < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solveRecursion(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    return mini;
}

int solveMemoization(vector<int> &num, int x, vector<int> &dp)
{
    // base case
    if (x == 0)
    {
        return 0;
    }

    if (x < 0)
    {
        return INT_MAX;
    }

    if (dp[x] != -1)
    {
        return dp[x];
    }

    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solveMemoization(num, x - num[i], dp);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    dp[x] = mini;

    return mini;
}

int solveTabulation(vector<int> &num, int x)
{
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < num.size(); j++)
        {
            if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], 1 + dp[i - num[j]]);
            }
        }
    }

    if (dp[x] == INT_MAX)
    {
        return -1;
    }

    return dp[x];
}

int minimumElements(vector<int> &num, int x)
{
    // *** Recursion and Memoization
    // vector<int> dp(x + 1, -1);
    // int ans = solveMemoization(num, x, dp);

    // if (ans == INT_MAX)
    // {
    //     return -1;
    // }

    // return ans;
    // Time Complexity : O(x * n); // where x is amount and n is number of elements
    // Space Complexity : O(x); // where x is amount

    // *** Tabulation
    return solveTabulation(num, x);

    // Time Complexity : O(x * n); // where x is amount and n is number of elements
    // Space Complexity : O(x); // where x is amount
}