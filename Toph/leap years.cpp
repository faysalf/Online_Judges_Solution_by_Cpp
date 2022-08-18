#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    if (n%4 == 0 and n%400 != 0) cout << "Yes\n";
    else cout << "No\n";
}
