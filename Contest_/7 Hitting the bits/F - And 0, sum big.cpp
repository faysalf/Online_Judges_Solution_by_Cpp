#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;

		ll res = 1LL;
		while (k--) {
			res *= n;
			res %= 1000000007;
		}

		cout << res << '\n';
	}

	return 0;
}