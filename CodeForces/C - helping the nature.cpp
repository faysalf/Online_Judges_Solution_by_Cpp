#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 2e5 + 1;
int arr[N];
ll dif[N];

void solve() {
    int n; cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        dif[i] = arr[i] - arr[i-1];
    }
    ll res = 0;
    for (int i=2; i<=n; i++) {
        if (dif[i] < 0) dif[1] += dif[i];
        res += abs(dif[i]);
    }
    cout << res + abs(dif[1]) << '\n';
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
