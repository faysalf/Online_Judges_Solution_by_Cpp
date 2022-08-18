#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, res = 0, sn; cin >> n;
    int arr[99];
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (res < arr[i]) res = arr[i];
    }
    cout << res << '\n';
}
