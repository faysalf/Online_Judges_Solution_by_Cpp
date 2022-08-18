#include <bits/stdc++.h>
using namespace std;
#define int long long int

int arr[100][100];

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
        vector<string>arr(n);
        vector<string>v = arr;
        sort(v.begin(), v.end());

        map<string, bool> m;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            m[arr[i]] = 1;
        }
        string res = "";
        for (int i=0; i<n; i++) {
            bool flag = 1;
            for (int j=0, k=n-1; j<1000 && j<=k; j++, k--) {
                string fs = arr[i]-v[j], ss = arr[i]-v[k];
                if (arr[i]>=v[j] && m[arr[i]-v[j]]) {
                    res += '1';
                    flag = 0;
                    break;
                }
                else if ((arr[i] >= v[k]) && m[arr[i]-v[k]]) {
                    res += '1';
                    flag = 0;
                    break;
                }
            }
            if (flag) res += '0';
        }
        cout << res << '\n';
    }

    return 0;
}
