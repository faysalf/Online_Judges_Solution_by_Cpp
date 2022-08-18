#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool g[101][101];

int32_t main() {

    int n; scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int u, k; scanf("%d %d",&u,&k);
        for (int j=0; j<k; j++) {
            int v; scanf("%d",&v);
            g[u][v] = 1;
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            printf("%d", g[i][j]);
            if (j==n) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
