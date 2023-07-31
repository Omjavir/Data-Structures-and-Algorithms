#include <unordered_map>
#include <list>
#include <queue>

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{

    // prepare adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // perform BFS
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        for (auto neighbour : adj[frontNode])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
                q.push(neighbour);
            }
        }
    }

    // prepare shortest path
    vector<int> ans;
    int currentNode = t;
    ans.push_back(t);

    while (currentNode != s)
    {
        currentNode = parent[currentNode];
        ans.push_back(currentNode);
    }

    // reverse the ans for getting right ans
    reverse(ans.begin(), ans.end());

    return ans;
}

// Time Complexity : O(N + E) i.e No of nodes + No of Edges
// Space Complexity : O(N + E) i.e No of nodes + No of Edges
