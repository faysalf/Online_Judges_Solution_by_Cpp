#include <bits/stdc++.h>
using namespace std;

double equation(long double c) {
	long double l = 1, r = 1e11, mid;
	mid = (l+r) / 2;

	while (true) {
		if (round(pow(mid,2) + sqrt(mid)) == c) break;
		else if (pow(mid,2) + sqrt(mid) > c) r = mid;
		else l = mid;
	}
	return mid;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long double c; cin >> c;
	double l = 0, r = 1e6, mid;
	for (int i=0; i<100; i++) {		//bs e 100 ti operation hote pare
		mid = (l+r) / 2;
		if (mid*mid + sqrt(mid) > c) r = mid;
		else if (mid*mid + sqrt(mid) < c) l = mid;
	}
	cout << setprecision(16) << r << '\n';

	return 0;
}