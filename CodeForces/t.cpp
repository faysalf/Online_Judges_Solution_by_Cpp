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
    
    string s = "adbc";
    string ss = "acbd";

    for (int i=0; i<min(s.size(), ss.size()); i++) {
        if (s[i]<ss[i]) {
            cout << "s is lexicographically smaller\n";
            break;
        }
        else if (s[i] > ss[i]) {
            cout << "ss is lexicographically smaller\n";
            break;
        }
    }
    return 0;
}