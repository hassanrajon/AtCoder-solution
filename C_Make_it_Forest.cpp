#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';
#define pb push_back
const int mx = 2e5 + 10;
bool visited[mx];
int cnt=0;
void dfs(vector<vector<int>> &adj, int source, int parent) {
    visited[source] = true;
    for (auto &child : adj[source]) {
        if (!visited[child]) {
          dfs(adj,child,source);
        } else if (child != parent) {
            cnt++;
        }
    }
}
void solve() { 
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(adj,i,-1);
        }
    }
    cout <<(cnt/2);nl
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
}
