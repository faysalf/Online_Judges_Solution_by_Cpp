#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int i = 1;

        if (n&1) {
            cout << "1 ";
            i = 2;
        }
        for (; i<=n; i+=2) cout << i+1 << ' '<< i <<' ';
        cout << '\n';
    }

    return 0;
}