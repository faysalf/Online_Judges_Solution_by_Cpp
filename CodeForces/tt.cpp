#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int tst;
    cin >> tst;
    while (tst--) {
        string s;
        cin >> s;
        int needA = s.size() / 2;
        int needB = s.size() / 2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') needA--;
            if (s[i] == ')') needB--;
        }
        if (needA == 0 || needB == 0) {
            cout << "YES\n";
        }
        else {
            string t = s;
            vector<int> que;
            int ca = needA;
            int cb = needB;
            for (int i = 0; i < t.size(); i++) {
                if (t[i] == '?') {
                    que.emplace_back(i);
                    if (needA > 0) {
                        t[i] = '(';
                        needA--;
                    }
                    else {
                        t[i] = ')';
                        needB--;
                    }
                }
            }
            t[que[ca - 1]] = ')';
            t[que[ca]] = '(';
            bool ok = true;
            int bal = 0;
            for (char& c : t) {
                assert(c == '(' || c == ')');
                if (c == '(') bal++;
                else bal--;
                if (bal < 0) ok = false;
            }
            assert(bal == 0);
            if (!ok) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}