#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 100007;

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;

        vector<int>g[N];
        int dist[N] = {0};
        bool vis[N] = {0};

        while (m--) {
            int v, u; cin >> u >> v;
            g[v].push_back(u);
            g[u].push_back(v);
        }
        int s; cin >> s;

        queue<int>q;
        q.push(s);
        vis[s] = true;
        dist[s] = 0;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (auto v:g[u]) {
                if (!vis[v]) {
                    q.push(v);
                    vis[v] = true;
                    dist[v] = dist[u] + 6;
                }
            }
        }
        //cerr << vis[s] << '\n';
        for(int i = 1; i <= n; i++) {
            if(i != s) {
                if(dist[i] == 0) {
                    cout<<"-1 ";
                }
                else {
                    cout<<dist[i]<<" ";
                }
            }
        }
        cout<<'\n';
    }

    return 0;
}