#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[2][2];
    int b[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> b[i][j];
        }
    }
    cout << a[0][0] * b[0][0] + a[0][1] * b[1][0]<<
    ' '<< a[0][0] * b[0][1] + a[0][1] * b[1][1] << '\n'<<
    a[1][0] * b[0][0] + a[1][1] * b[1][0] << ' '<<
    a[1][0] * b[0][1] + a[1][1] * b[1][1] << '\n';

    return 0;
}
