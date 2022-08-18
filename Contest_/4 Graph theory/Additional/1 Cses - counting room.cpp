#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int N = 1e3 + 7;
vector<int>row {-1,0,0,1}, col {0,-1,1,0};
bool vis[N][N];
int n, m;
 
void dfs(int i, int j) {
    vis[i][j] = true;
    for (int k=0; k<4; k++) {
        int x = i+row[k], y = j+col[k];
        if (x>=0 && y>=0 && x<n && y<m && !vis[x][y]) {
            dfs(x,y);
        }
    }
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
 
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char f; cin >> f;
            vis[i][j] = (f=='#');
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (!vis[i][j]) {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
 
    return 0;
}