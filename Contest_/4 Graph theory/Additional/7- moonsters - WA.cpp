#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef pair<int, int> pii;
#define f first
#define s second
 
const int N = 1e3+2;
int dist[N][N];
bool vis[N][N];
//unordered_map<int, int> mp;
//vector<char> g[N][N];
char g[N][N], par[N][N];
vector<int> row {-1,0,0,1}, col {0,-1,1,0};
 
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int si, sj, ei=-1, ej=-1;
    int n, m; cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char ch; cin >> ch;
            if (ch == 'A') si = i, sj = j;
            vis[i][j] = (ch == '#');
            g[i][j] = ch;
        }
    }
    queue<pii> q;
    q.push({si, sj});
    vis[si][sj] = true;
 
    while (!q.empty()) {
        pii p = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int x = p.f + row[i], y = p.s + col[i];
            int x0 = x + row[0], y0 = y + col[0];
            int x1 = x + row[1], y1 = y + col[1];
            int x2 = x + row[2], y2 = y + col[2];
            int x3 = x + row[3], y3 = y + col[3];
            if (x>=0 && x < n && y>=0 && y<m && !vis[x][y]) {
                if (g[x0][y1]!='M' && g[x1][y1]!='M' && g[x2][y2]!='M' && g[x3][y3]!='M') {
                    if      (i==0) par[x][y] = 'U';
                    else if (i==1) par[x][y] = 'L';
                    else if (i==2) par[x][y] = 'R';
                    else if (i==3) par[x][y] = 'D';
 
                    dist[x][y] = dist[p.f][p.s] + 1;
                    q.push({x,y});
                    vis[x][y] = true;
                    if (x == 0 || x==n-1 || y==0 || y==m-1) {
                        ei = x;
                        ej = y;
                        
                    }
                }
            }
        }
    }
    if (ei == -1 && ej==-1) {
        cout << "NO\n";
        return 0;
    }
    string st = "";
        cout << "YES\n"<< dist[ei][ej] << '\n';
        for (int i=dist[ei][ej]; i>0; i--) {
            if      (par[ei][ej] == 'U') ei++, st+='U';
            else if (par[ei][ej] == 'D') ei--, st+='D';
            else if (par[ei][ej] == 'L') ej++, st+='L';
            else if (par[ei][ej] == 'R') ej--, st+='R';
        }
        reverse(st.begin(), st.end());
        cout << st << '\n';
    
 
 
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// typedef pair<int, int> pii;
// #define f first
// #define s second

// const int N = 1e3+7;
// int dist[N][N];
// bool vis[N][N];
// //unordered_map<int, int> mp;
// //vector<char> g[N][N];
// char g[N][N], par[N][N];
// vector<int> row {-1,0,0,1}, col {0,-1,1,0};

// int32_t main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int si, sj, ei=-1, ej=-1;
//     int n, m; cin >> n >> m;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<m; j++) {
//             char ch; cin >> ch;
//             if (ch == 'A') si = i, sj = j;
//             vis[i][j] = (ch == '#');
//             g[i][j] = ch;
//         }
//     }
//     queue<pii> q;
//     q.push({si, sj});
//     vis[si][sj] = true;

//     // if (g[si-1][sj]=='M' || g[si+1][sj]=='M' || g[si][sj-1]=='M' || g[si][sj+1]=='M') {
//     //     cout << "NO\n";
//     //     return 0;
//     // }
    
//     while (!q.empty()) {
//         pii p = q.front();
//         q.pop();
//         for (int i=0; i<4; i++) {
//             int x = p.f + row[i], y = p.s + col[i];
//             int x0 = x + row[0], y0 = y + col[0];
//             int x1 = x + row[1], y1 = y + col[1];
//             int x2 = x + row[2], y2 = y + col[2];
//             int x3 = x + row[3], y3 = y + col[3];

//             if (x>=0 && x < n && y>=0 && y<m && !vis[x][y]) {
//                 if (g[x0][y0]!='M' && g[x1][y1]!='M' && g[x2][y2]!='M' && g[x3][y3]!='M') {

//                     bool flag = 0;
//                     if (g[x][y]=='.') {
//                         cerr << 1 << '\n';
//                         for (int j=0; j<4; j++) {
//                             int xx = x + row[j], yy = y + col[j];

//                             if (g[xx][yy] == 'M') {
//                                 flag = 1;
//                             }
//                             else if (g[xx][yy] == '.') {
//                                 for (int k=0; k<4; k++) {
//                                     if (g[xx+row[k]][yy+col[k]] == 'M') {
//                                         flag = 1;
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                     if (flag) continue;

//                     if      (i==0) par[x][y] = 'U';
//                     else if (i==1) par[x][y] = 'L';
//                     else if (i==2) par[x][y] = 'R';
//                     else if (i==3) par[x][y] = 'D';

//                     dist[x][y] = dist[p.f][p.s] + 1;
//                     q.push({x,y});
//                     vis[x][y] = true;
//                     if (x == 0 || x==n-1 || y==0 || y==m-1) {
//                         ei = x;
//                         ej = y;
                        
//                     }
//                 }
//             }
//         }
//     }
//     cerr << g[6][3] << '\n';

//     if ((ei == -1 && ej==-1)) {
//         cout << "NO\n";
//         return 0;
//     }
//     string st = "";
//     bool ok = 0;
//     int fi = ei, fs = ej;
//         //cout << "YES\n"<< dist[ei][ej] << '\n';
//         for (int i=dist[ei][ej]; i>0; i--) {
//             if      (par[ei][ej] == 'U') ei++, st+='U';
//             else if (par[ei][ej] == 'D') ei--, st+='D';
//             else if (par[ei][ej] == 'L') ej++, st+='L';
//             else if (par[ei][ej] == 'R') ej--, st+='R';
//             else ok = 1;
//         }
//         if (ok) cout << "NO\n";
//         else {
//             cout << "YES\n" << dist[fi][fs] << '\n';
//             reverse(st.begin(), st.end());
//             cout << st << '\n';
    
//         }

//     return 0;
// }
