#include <bits/stdc++.h>
#include <string>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,r,f; cin>>n;
    cin.ignore();
    string s;
    getline(cin, s);
    for (int i=0; i<s.size(); i++){

        if (isspace(s[i])) continue;
        r = s[i] -n;
        if (r<97){
            r += 26;
        }
        s[i] = r;
        }
        cout << s;

    return 0;
}
