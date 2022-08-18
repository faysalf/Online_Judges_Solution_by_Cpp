#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll GCD(ll a, ll b) {
    if (a==0) return b;
    if (b==0) return a;
    if (a<b) swap(a,b);
    return GCD(a%b, b);
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    ll ngcd;
    for (int i=0; i<n; i++) {
        ll m; cin >> m;
        if (i==0) ngcd = m;
        else {
            ngcd = GCD(ngcd, m);
        }
    }
    int cnt = 0;
    for (ll i=1; i*i<=ngcd; i++) {    // a/i && b/i also a divisor of gcd(a,b)/i
        if (ngcd%i==0) {
            cnt++;
            if (i != ngcd/i) cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}