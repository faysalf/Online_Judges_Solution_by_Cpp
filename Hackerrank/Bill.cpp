#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    int sum = 0;
    for (int i=0; i<n; i++) {
        int m; cin >> m;
        if (i != k) sum += m;
    }
    int b; cin >> b;
    if (b==sum/2) cout << "Bon Appetit\n";
    else cout << b-sum/2 << '\n';

    return 0;
}