#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin>>s;

    int len = s.length();
    for (int i = 0; i<len; i++){
        if ((len-i)%3 == 0 and i>0){
            cout <<',';
        }cout << s[i];
    }
}
