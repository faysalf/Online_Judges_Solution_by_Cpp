#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    //string ss = "";
    bool flag = true;
    int i=0;
    int siz = s.size();
    while (i<siz){
        if ((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B')){
            if (!flag){
                cout << " ";
                flag = true;
            }
            i += 3;

        }else{
            cout << s[i];
            i += 1;
            flag = false;
        }
    }
    /*if (siz>=3){
        if (!(s[siz-3]=='W' && s[siz-2]=='U' && s[siz-1]=='B')) {
            cout<<s[siz-2]<<s[siz-1];
        }
    }*/

return 0;
}
