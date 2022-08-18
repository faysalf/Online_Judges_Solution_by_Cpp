#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
		long long int ans = 0;

		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		for (int i=0; i<n-1; i++) {
			ans = max(ans, 1LL * arr[i] * arr[i+1]);
		}
		cout << ans << '\n';
	}

	return 0;
}