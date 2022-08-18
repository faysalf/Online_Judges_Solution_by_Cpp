#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll factorial(ll n){
    ll int res = 1;
    for (int i=2; i<=n; i++){
        res *= i;
    }
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    ll fact = factorial(n);
    if (fact>9999){
        string s = to_string(fact);
        ll l = s.length();
        cout << s[l-4] << s[l-3]<<s[l-2]<<s[l-1];
    }else{
        if (fact==0) cout << "0000\n";
        else cout << fact;
    }
}

