#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 105;
vector<int> g[N], dt(N), ft(N);
bool vis[N];
int t = 1;

void dfs (int u) {
    vis[u] = true;
    dt[u] = (t++);
    for (auto v:g[u]) {
        if (!vis[v]) dfs(v);
    }
    ft[u] = (t++);
}

int32_t main() {
    
    int n; scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int u, k; scanf("%d %d",&u,&k);
        for (int j=0; j<k; j++) {
            int v; scanf("%d",&v);
            g[u].push_back(v);
        }
    }
    for (int i=1; i<=n; i++) {
        if (!vis[i]) dfs(i);
    }
    for (int i=1; i<=n; i++) {
        printf("%d %d %d\n",i,dt[i],ft[i]);
    }

    return 0;
}
