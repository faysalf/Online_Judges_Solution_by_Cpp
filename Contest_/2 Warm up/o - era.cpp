#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t; cin >> t;
 
  while (t--) {
    int n; cin >> n;
    int r = 0;
 
    for (int i = 1; i <= n; i++) {
      int m; cin >> m;
      r = max(r, m - i);
    }
    cout << r << '\n';
  }
  return 0;
}