#include <bits/stdc++.h>
using namespace std;

string pass(string s){
    int it = s[0];
    char iT = char(it-32);

    int siz = s.size();
    string res = "";
    res += iT;
    for (int i=1; i<siz; i++){
        if (s[i] == 's'){
            res += '$';
        }
        else if (s[i] == 'i'){
            res += '!';
        }
        else if (s[i] == 'o'){
            res += "()";
        }
        else res += s[i];
    }
    res += '.';
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    cout << pass(s)<<'\n';
}
