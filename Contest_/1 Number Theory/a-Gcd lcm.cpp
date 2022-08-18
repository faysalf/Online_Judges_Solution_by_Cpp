#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll GCD(int a, int b) {
    if (a==0) return b;
    if (b==0) return a;
    if (a < b) swap(a,b);
    return GCD(a%b, b);
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
        ll a, b; cin >> a >> b;

        ll gc = GCD(a,b);
        cout << gc << ' ' << (a*b) / gc << '\n';
    }

    return 0;
}
