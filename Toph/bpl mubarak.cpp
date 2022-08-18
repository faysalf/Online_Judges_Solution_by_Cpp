#include <bits/stdc++.h>
#include <string>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    for (int i=0; i<t; i++){
        string s; cin >> s;

        int coun = 0;
        for (char i:s){
            if (i>='0' && i<='6' || i=='O') coun += 1;
        }
        int ball = coun%6;
        int over = coun/6;

        if (ball != 0 and over != 0){
            printf("%d %s %d %s\n",over,(over>1)? "OVERS":"OVER",ball, (ball>1)? "BALLS":"BALL");
        }
        else if (ball==0 and over!=0){
            printf("%d %s\n",over, (over>1)? "OVERS":"OVER");
        }
        else{
            printf("%d %s\n",ball, (ball>1)? "BALLS":"BALL");
        }
    }
    return 0;
}
