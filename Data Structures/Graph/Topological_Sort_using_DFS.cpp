#include <bits/stdc++.h> 
void topoSort(int node, stack<int> &s,unordered_map<int, list<int>> &adj, vector<bool> &visited){
    visited[node] = true;

    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            topoSort(neighbour, s, adj, visited);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // prepare adj list
    unordered_map<int, list<int>> adj;
    for(int i = 0; i < e; i++){
        int a = edges[i][0];
        int b = edges[i][1];

        adj[a].push_back(b);
    }

    vector<bool> visited(v);
    stack<int> s;
    for(int i = 0; i < v; i++){
        if(!visited[i]){
            topoSort(i, s, adj, visited);
        }
    }

    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}