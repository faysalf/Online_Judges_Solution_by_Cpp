#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double n; cin>>n;
    cout << '[';
    int res = n/10;
    int baki = 10-res;
    for (int i=0; i<res; i++){
        cout << '+';
    }
    for (int i=0; i<baki; i++){
        cout << '.';
    }
    int r = n;
    cout << ']' << ' ' << r << '%'<<'\n';

    return 0;
}
