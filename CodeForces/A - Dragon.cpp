#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2) {
    if (p1.first == p2.first) {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int s, n; cin >> s >> n;
    
    bool flag = 1;
    
    vector<pair<int, int>> mp;
    
    while (n--) {
        int dra, strn; cin >> dra >> strn;
        mp.push_back({dra, strn});
    }
    sort(mp.begin(), mp.end(), comp);
    
    for (auto [a,b]:mp) {
        if (s > a) {
            s += b;
        }
        else {
            cout << "NO\n";
            flag = 0;
            break;
        }
    }
    if (flag) cout << "YES\n";

    return 0;
}
