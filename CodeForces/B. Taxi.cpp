#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int one =0;
    int two = 0;
    int three = 0;
    int four = 0;
    int minn = 0;
    cin >> n;

    int l[n] = {};
    for (int i=0; i<n; i++){
        cin >> l[i];

        if (l[i] == 1){
            one += 1;
        }else if (l[i]==2){
            two += 1;
        }else if (l[i] == 3){
            three += 1;
        }else{
            four += 1;
        }
    }
    minn = four + two/2 + three;
    one -= three;
    if (two&1 == 1){
        minn += 1;
        if (one<=2){
            one = 0;
        }else{
            one -= 2;
        }
    }
    if (one > 0){
        minn += (one+3)/4;
    }
    cout <<minn;

    return 0;
}
