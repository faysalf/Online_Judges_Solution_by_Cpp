#include <bits/stdc++.h>
using namespace std;

bool ok(int n, int k, vector<long long>v, long long mid) {
	int count = 1;
	long long sum = 0;

	for (int i=0; i<n; i++) {
		if (v[i] > mid) return false;

		if (sum + v[i] > mid) {
			sum = v[i];
			count++;
		}
		else sum += v[i];
	}
	return count <= k;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;
	vector < long long > v(n);
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}
	long long l = 0, r = 1e18, mid;
	while (l+1 < r) {
		mid = (l+r)/2;
		if (ok(n, k, v, mid)) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	cout << r << '\n';

	return 0;
}