#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t; cin >> n;
	map<pair<int, int>, string> mp;

	while (n--) {
		int a, b; string c;
		cin >> a >> b >> c;
		mp[{a,b}] = c;
	}
	cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		cout << mp[{a,b}] << '\n';
	}

	return 0;
}