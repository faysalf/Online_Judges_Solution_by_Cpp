#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    bool flag = true;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if ((n==2 or flag==true) and n>=2){
        cout << "Yes\n";
    }else{
    cout << "No\n";
    }
}
