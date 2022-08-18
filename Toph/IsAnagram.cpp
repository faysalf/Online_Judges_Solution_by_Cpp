#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin>>s;
    string ss; cin>>ss;
    sort(s.begin(),s.end());
    sort(ss.begin(), ss.end());

    if (s==ss) cout << "Yes\n";
    else cout << "No";
}
