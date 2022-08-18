
#include <iostream>
using namespace std;

int main()
{
    string s;
    char upper;
    bool flag = true;
    cin >> s;

    for(int i=1; i<s.length(); i++)
    {
        if(islower(s[i]))
        {
            flag = false;
        }
    }

    if(flag == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                upper = toupper(s[j]);
            else
                upper = tolower(s[j]);
            cout << upper;
        }
    }
    else
        cout << s;
    return 0;
}




/*

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    string upp = "";
    string low = "";

    for (int k : s){
        if (islower(k)){
            low += k;
            int r = k;
            upp += char(r-32);
        }else{
            upp += k;
            int r = k;
            low += char(r+32);
        }
    }
    if (s.size() == 1){
            if (islower(s[0])){
                int r = s[0];
                cout << char(r-32);
            }else{
                cout << s;
            }
    }else if (upp==s){
        cout << s;
    }else{
        int r = low[0];
        char ss = char(r-32);
        low[0] = ss;

        cout << low;
    }

return 0;
}*/
