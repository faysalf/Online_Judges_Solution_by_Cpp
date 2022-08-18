#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1005;
bool primeCheck[N];
vector<int> p;

void sieve() {
    primeCheck[0] = 1;
    primeCheck[1] = 1;
    for (int i=2; i*i<N; i++) {
        for (int j=i*i; j<N; j+=i) {
            primeCheck[j] = 1;
        }
    }
    for (int i=2; i<N; i++) {
        if (!(primeCheck[i])) p.push_back(i);
    }
}
int cal(ll a, ll k) {
    ll res = pow(a, k+1);
    --res;
    res /= (a-1);

    return res;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    sieve();

    int n; cin >> n;
  
    for (int i=0; i<n; i++) {
        int f; cin >> f;
        
        int mpf = INT_MAX, gpf = -1, dispf = 0, totpf = 0, ndiv = 0, sdiv = 0;

        for (int j=0; j<p.size() && p[j]*p[j] <= f; j++) {
            int ele = p[j];
            if (f%ele==0) {
                mpf = min(mpf, ele);
                gpf = max(gpf, ele);
                dispf++;

                int dupC = 0;
                while (f%ele) {
                    dupC++;
                    totpf++;
                    f /= ele;
                }
                ndiv *= (dupC+1);
                sdiv *= cal(ele,dupC);            }
        }
        
        cout << mpf <<' '<<gpf<<' '<<dispf<<' '<<totpf<<' '<<ndiv<<' '<<sdiv<<'\n';

    }

    return 0;
}