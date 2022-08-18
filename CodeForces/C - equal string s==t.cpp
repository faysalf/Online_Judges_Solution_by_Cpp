#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool is_equal(string a, string b, int n) {
    bool flag = 1;
    for (int i=0; i<n; i++) {
        int j;
        if (a[i] != b[i]) {
            for (j = i+1; j<n && a[i]==a[j]; j++);

            if (j<n && a[j]==b[i] && a[j]==a[i]+1) {    //a[i]<a[j]
                swap(a[i], a[j]);
            }
            else {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }
    if (flag && a==b) return 1;
    return 0;
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
        int n; cin >> n;
        string f, s; cin >> f >> s;

        if (is_equal(f,s,n)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
