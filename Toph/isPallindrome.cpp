#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, rev; cin>>s;
    rev = s;
    reverse(rev.begin(),rev.end());

    cout << rev;
    if (s==rev) cout << "Yes\n";
    else cout << "No\n";
}
