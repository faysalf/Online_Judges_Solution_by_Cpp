#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool vis[100001];
vector<int> g[200001], path;
int pre;

void dfs(int u) {
    vis[u] = true;
    pre = u;
    for (auto v:g[u]) {
        if (!vis[v]) dfs(v);
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    for (int i=0; i<m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (!vis[i]) {
            path.push_back(i);
            cnt++;
            dfs(i);
        }
    } cerr << vis[n] << '\n';

    cout << cnt-1 << '\n';
    for (int i=0; i<path.size()-1; i++) {
        cout << path[i] << ' '<< path[i+1]<< '\n';
    }
    

    return 0;
}
