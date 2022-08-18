#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
typedef pair<int,int> pii;

const int N = 1e3;
vector<int> row {-1,0,0,1}, col {0,-1,1,0};
bool vis[N][N];
char par[N][N];                             // L R D U position locate kora
int dist[N][N], fi, fj, ei, ej;             // distance will need

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin >> n >> m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char ch; cin >> ch;
            vis[i][j] = (ch=='#');
            if (ch=='A') {
                fi = i;
                fj = j;
            }
            else if (ch=='B') {
                ei = i;
                ej = j;
            }
        }
    }
    queue<pii> q;
    q.push({fi,fj});
    vis[fi][fj] = true;

    while (!q.empty()) {
        pii p = q.front(); q.pop();
        for (int i=0; i<4; i++) {
            int x = p.f + row[i], y = p.s + col[i];

            if (x>=0 && x < n && y>=0 && y<m && !vis[x][y]) {
                if      (i==0) par[x][y] = 'U';
                else if (i==1) par[x][y] = 'L';
                else if (i==2) par[x][y] = 'R';
                else if (i==3) par[x][y] = 'D';

                dist[x][y] = dist[p.f][p.s] + 1;        //distance gonona rakha hocche, jeta 1st pabo setae 1st
                q.push({x,y});
                vis[x][y] = true;
            }
        }
    }
    if (!vis[ei][ej]) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n" << dist[ei][ej] << '\n';

    string st = "";
    for (int i=dist[ei][ej]; i>0; i--) {
        if      (par[ei][ej] == 'U') {ei++; st+='U';}
        else if (par[ei][ej] == 'D') {ei--; st+='D';}
        else if (par[ei][ej] == 'L') {ej++; st+='L';}
        else if (par[ei][ej] == 'R') {ej--; st+='R';}
    }
    reverse(st.begin(), st.end());

    cout << st << '\n';

    return 0;
}
