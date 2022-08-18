#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	int n; cin >> n;
	ll arr[n];
	for (auto &i:arr) cin >> i;

	ll res = arr[0];
	for (int i=1; i<n; i++) {
		res &= arr[i];
	}
	cout << res << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}