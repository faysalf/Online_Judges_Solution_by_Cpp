#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 1e5;
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
    
    
        int n; cin >> n;
        vector<int>v(n);
        for (int i=0; i<n; i++) {
            int fs; cin >> fs;
            v[i] = -fs;
        }
        for (auto i:v) cerr << i << ' ';

        
        sort(v.begin(), v.end());
        vector<int>dist(n+2);
        dist[0] = 1;
        for (int i=1; i<=n; i++) {
            if (v[i]==v[i-1]) dist[i] = dist[i-1];
            else dist[i] = dist[i-1] + 1;
        }
        int m; cin >> m;
        while (m--) {
            int q; cin >> q;
            int idx = lower_bound(v.begin(), v.end(), -q) - v.begin();
            cout << dist[idx] << '\n';
        }

    

    return 0;
}
