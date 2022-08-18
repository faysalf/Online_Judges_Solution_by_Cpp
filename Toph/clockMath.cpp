#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h, m; cin>>h>>m;
    if (m==12) m=0;
    if (h==12) h = 0;

    double hang = 0.5 * (h*60 + m);
    double mang = 6*m;

    double ang = hang-mang;
    printf("%.7f\n", min(360-ang,ang));
}
