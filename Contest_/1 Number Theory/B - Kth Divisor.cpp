#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll kthDivisor(ll a, ll n) {
    vector<ll>v;
    v.push_back(1);
    for (ll i=2; i*i<=a; i++) {
        if (a%i == 0) {
            v.push_back(i);
            if (i != a/i) v.push_back(a/i);
        }
    }
    sort(v.begin(), v.end());
    if (a>1) v.push_back(a);

    if (v.size() < n) return -1;
    else {
        return v[n-1];
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b; cin >> a >> b;

    cout << kthDivisor(a,b) << '\n';

    return 0;
}
