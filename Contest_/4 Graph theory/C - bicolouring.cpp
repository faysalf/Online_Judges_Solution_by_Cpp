#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 205;
vector<int> g[N];
bool vis[N], ok;
int col[N];

void dfs (int u) {
    vis[u] = true;
    for (auto v:g[u]) {
        if (!vis[v]) {
            col[v] = col[u]^1;
            dfs(v);
        }
        else if (col[u] == col[v]) ok = false;
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        int a; scanf("%d",&a);
        if (!a) break;

        int l; scanf("%d",&l);
        int mn = INT_MAX, mx = 0;
        while (l--) {
            int u, v; scanf("%d %d", &u, &v);
            mn = min(mn, min(u,v));
            mx = max(mx, max(u,v));

            g[u].push_back(v);
            g[v].push_back(u);
        }
        ok = true;
        for (int i=mn; i<=mx; i++) {
            if (!vis[i]) dfs(i);
        }
        if (ok) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        fill(vis, vis+mx+1, 0);
        fill(col, col+mx+1, 0);
        for (int i=mn; i<=mx; i++) g[i].clear();
    }

    return 0;
}
