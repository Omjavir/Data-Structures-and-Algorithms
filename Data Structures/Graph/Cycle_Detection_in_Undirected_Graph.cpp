#include <unordered_map>
#include <queue>
#include <list>

bool detectCycleUsingBFS(int src, unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited)
{
    // Time Complexity : Linear
    unordered_map<int, int> parent;
    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        for (auto neighbour : adjList[frontNode])
        {
            if (visited[neighbour] == true && neighbour != parent[frontNode])
            {
                return true;
            }
            else if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = frontNode;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bool ans = detectCycleUsingBFS(i, adjList, visited);
            if (ans == 1)
            {
                return "Yes";
            }
        }
    }

    return "No";
}

// Using DFS

bool iscyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    // Time Complexity : Linear
    visited[node] = true;
    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            bool cycledetected = iscyclicDFS(neighbour, node, visited, adj);
            if (cycledetected)
                return true;
        }
        else if (neighbour != parent)
        {
            // cycle present
            return true;
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // to handle disconnected components
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // bool ans = iscyclicBFS(i,visited,adj);
            bool ans = iscyclicDFS(i, -1, visited, adj);
            if (ans == 1)
            {
                return "Yes";
            }
        }
    }
    return "No";
}