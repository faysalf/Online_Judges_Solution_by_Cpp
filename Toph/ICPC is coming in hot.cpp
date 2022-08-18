///WA on 3rd test case

#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin>>s;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<s.size(); i++){
        arr[i] ++;
    }
    int mx = 0;
    for (int i:arr){
        if (i > mx){
            mx = i;
        }
    }
    cout << mx;
}


/*#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; int z,o,t,th,f,fi,si,se,e,n; cin >> s;
    for (char i:s){
        if (i=='0') z++;
        else if (i=='1') o++;
        else if (i=='2') t++;
        else if (i=='3') th++;
        else if (i=='4') f++;
        else if (i=='5') fi++;
        else if (i=='6') si++;
        else if (i=='7') se++;
        else if (i=='8') e++;
        else if (i=='9') n++;
    }
    cout << z,o,t,th,f,fi,si,se,e,n;
    if (z>o and z>t and z>th and z>f and z>fi
    and z>si and z>se and z>e and z>n) cout << '0';
    else if (o>z and o>t and o>th and o>f and o>fi
    and o>si and o>se and o>e and o>n) cout << '1';
    else if (t>z and t>o and t>th and t>f and t>fi
    and t>si and t>se and t>e and t>n) cout << '2';

    else if (th>z and th>t and th>o and th>f and th>fi
    and th>si and th>se and th>e and th>n) cout << '3';

    else if (f>z and f>t and f>th and f>o and f>fi
    and f>si and f>se and f>e and f>n) cout << '4';

    else if (fi>z and fi>t and fi>th and fi>f and fi>o
    and fi>si and fi>se and fi>e and fi>n) cout << '5';

    else if (si>z and si>t and si>th and si>f and si>fi
    and si>o and si>se and si>e and si>n) cout << '6';

    else if (se>z and se>t and se>th and se>f and se>fi
    and se>si and se>o and se>e and se>n) cout << '7';

    else if (e>z and e>t and e>th and e>f and e>fi
    and e>si and e>se and e>o and e>n) cout << '8';
    else cout << '9';
    cout << '\n';


    return 0;
}*/
