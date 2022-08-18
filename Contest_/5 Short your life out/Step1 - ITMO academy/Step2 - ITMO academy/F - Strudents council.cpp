#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool ok(int k, int n, vector<int> v, int mid) {
	int sum = 0;
	for (auto i:v) {
		sum += min(mid,i);
	}
	return sum >= mid*k;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k, n; cin >> k >> n;
	vector<int> v(n);

	for (auto &i:v) {
		cin >> i;
	}
	int l=0, r = 1e16;
	while (l+1 < r) {
		int mid = (l+r)/2;

		if (ok(k, n, v, mid)) l = mid;
		
		else r = mid;
	}
	cout << l << '\n';

	return 0;
}