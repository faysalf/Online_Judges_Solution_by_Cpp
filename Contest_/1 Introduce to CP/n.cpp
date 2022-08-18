#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--){
		long long s, sm, sam, n;
		cin >> n;

		sm = (n * (n+1)) / 2;
		s = 1;
		while (s <= n) {
			sm -= s*2;
			s = s*2;
		}
		
		cout << sm << '\n';
	}

	return 0;
}