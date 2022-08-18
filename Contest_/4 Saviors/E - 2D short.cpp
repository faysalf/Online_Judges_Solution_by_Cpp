#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while (t--) {
  	vector<pair<int,int>> v;
  	int n; cin >> n;
  	while (n--) {
  		int x,y; 
  		cin >> x >> y;
  		v.push_back({x,-y});
  	}
  	sort(v.begin(), v.end());
  	for (int i=0; i<v.size(); i++) {
  		cout << v[i].first << ' ' << -v[i].second << '\n';
  	}
  }

  return 0;
}