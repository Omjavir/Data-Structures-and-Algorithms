#include <bits/stdc++.h>

using namespace std;

class Solution
{
    void findPathHelper(int i, int j, vector<vector<int>> &a, int n, vector<string> &ans, string move,
                        vector<vector<int>> &vis)
    {
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(move);
            return;
        }

        // downward
        if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1)
        {
            vis[i][j] = 1;
            findPathHelper(i + 1, j, a, n, ans, move + 'D', vis);
            vis[i][j] = 0;
        }

        // left
        if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1)
        {
            vis[i][j] = 1;
            findPathHelper(i, j - 1, a, n, ans, move + 'L', vis);
            vis[i][j] = 0;
        }

        // right
        if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1)
        {
            vis[i][j] = 1;
            findPathHelper(i, j + 1, a, n, ans, move + 'R', vis);
            vis[i][j] = 0;
        }

        // upward
        if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1)
        {
            vis[i][j] = 1;
            findPathHelper(i - 1, j, a, n, ans, move + 'U', vis);
            vis[i][j] = 0;
        }
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));

        if (m[0][0] == 1)
            findPathHelper(0, 0, m, n, ans, "", vis);
        return ans;
    }
};

int main()
{
    int n = 4;

    vector<vector<int>> m = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    Solution obj;
    vector<string> result = obj.findPath(m, n);
    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;

    return 0;
}

// ***** Coding Ninjas#include <bits/stdc++.h>

bool isSafe(int x, int y, vector<vector<bool>> &visited,
 vector<vector<int>> &arr, int n)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) &&
        (visited[x][y] != 1) && (arr[x][y] == 1))
    {
        return true;
    }
    else    
    {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, int n,
 vector<string> &ans, vector<vector<bool>> &visited, string path)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // 4 movement
    // D, L, R, U
    visited[x][y] = 1;
    // Down
    if (isSafe(x + 1, y, visited, arr, n))
    {
        solve(x + 1, y, arr, n, ans, visited, path + 'D');
    }

    // Left
    if (isSafe(x, y - 1, visited, arr, n))
    {
        solve(x, y - 1, arr, n, ans, visited, path + 'L');
    }

    // Right
    if (isSafe(x, y + 1, visited, arr, n))
    {
        solve(x, y + 1, arr, n, ans, visited, path + 'R');
    }

    // Up
    if (isSafe(x - 1, y, visited, arr, n))
    {
        solve(x - 1, y, arr, n, ans, visited, path + 'U');
    }

    visited[x][y] = 0;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    string path = "";

    if (arr[0][0] == 0)
    {
        return ans;
    }

    solve(0, 0, arr, n, ans, visited, path);

    return ans;
}