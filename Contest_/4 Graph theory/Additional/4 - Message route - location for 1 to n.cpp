#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 1e5 + 7;
bool vis[N];
vector<int> g[2*N];
int par[N], dist[N];

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
    queue<int>q;
    q.push(1);
    vis[1] = true;
    dist[1] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v:g[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
                par[v] = u;                 //v er moddhe ager location rekhe dilam jeno dhore dhore jete pari
                dist[v] = dist[u] + 1;      //distance
            }
        }
    }
    if (!vis[n]) cout << "IMPOSSIBLE\n";
    else {
        cout << dist[n] << '\n';
        vector<int> path;

        int v = n;
        while (v != 1) {
            path.push_back(v);
            v = par[v];
        }
        cout << "1 ";
        for (int i=path.size()-1; i>=0; i--) {
            cout << path[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
