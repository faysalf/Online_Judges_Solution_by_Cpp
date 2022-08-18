#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int prev=1, pres=1;
    for (int i=0; i<n-2; i++){
        int jp = prev;
        prev = pres;
        pres += jp;
    }
    cout << pres << '\n';
}
