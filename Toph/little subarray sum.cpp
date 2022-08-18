#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b; cin>>n>>a>>b;
    int arr[100];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    while (a <= b){
        sum += arr[a];
        a += 1;
    }
    cout << sum << endl;

}
