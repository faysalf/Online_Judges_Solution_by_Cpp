#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		map<int, int> mp;
		int n, mx = 0; cin >> n;
		for (int i=0; i<n; i++) {
			int r; cin >> r;
			mp[r]++;
			if (mp[r] > mx) mx = mp[r];
		}

		// int mx = 0;
		// for (auto [i,j]:mp) {
		// 	if (j>mx) {
		// 		mx = j;
		// 	}
		// }
		
		if (mx > n/2) cout << mx - (n-mx) << '\n';
		else cout << n%2 << '\n';
	}

	return 0;
}