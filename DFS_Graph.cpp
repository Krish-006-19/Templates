#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int node) {
    vis[node] = true;

    cout << node << " ";

    for (int nei : adj[node]) {
        if (!vis[nei]) {
            dfs(nei);
        }
    }
}
