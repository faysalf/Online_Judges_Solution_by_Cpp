#include <bits/stdc++.h>
using namespace std;

bool ok(int n, vector<int>&x, vector<int>&v, double mid) {
	double l = -1e10;
	double r = 1e10;

	for (int i=0; i<n; i++) {
		double xL = x[i] - mid*v[i];
		double xR = x[i] + mid*v[i];	//determine the distance

		l = max(l,xL);
		r = min(r,xR);
		if (l > r) {		//kono distance jodi l>r hoy tahole intersect possible na, tai false
			return false;
		}
	}
	return true;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<int> x(n), v(n);

	for (int i=0; i<n; i++) {
		cin >> x[i] >> v[i];
	}
	double mid, l = 0, r = 1e18;

	for (int i=0; i<100; i++) {
		mid = (l+r)/2;

		if (ok(n, x, v, mid)) {
			r = mid;
		}
		else l = mid;
	}
	cout << setprecision(10) << r << '\n';

	return 0;
}