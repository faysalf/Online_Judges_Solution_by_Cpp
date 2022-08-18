#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int sq = sqrt(n);
    vector <int> arr {1,n};
    for (int i=2; i<=sq; i++){
        if (n%i == 0){
            arr.push_back(i);
            if (n/i != i){
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(),arr.end());

    for (auto i:arr){
        cout << i <<'\n';
    }
}
