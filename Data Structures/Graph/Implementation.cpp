// Implementation of Adjancency List
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // 0 -> Undirected graph
        // 1 -> Directed graph

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n; // Number of nodes
    cout << "Enter the number of nodes : " << endl;
    cin >> n;
    int m; // Number of edges
    cout << "Enter the number of edges : " << endl;
    cin >> m;

    Graph g;
    // Taking inputs of nodes
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // Creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // Printing the graph
    g.printAdjList();
    return 0;
}

/*
Input :
Enter the number of nodes :
6
Enter the number of edges :
5
5 3
3 1
3 4
1 2
2 4

Output :
2 -> 1, 4,
4 -> 3, 2,
1 -> 3, 2,
5 -> 3,
3 -> 5, 1, 4,
*/