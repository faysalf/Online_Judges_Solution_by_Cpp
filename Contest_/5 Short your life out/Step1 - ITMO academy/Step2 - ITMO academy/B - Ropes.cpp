#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;

	vector <int> a(n);
	for (auto  &i:a) {
		cin >> i;
	}
	double l = 0;
	double r = 1e7+5;

	for (int j=0; j<100; j++) {	// 100 bar jachai kore dekhbe
		double mid = (l+r)/2;	//ekta nirdishto len

		int co = 0;				// number of cutting ropes
		for (int i=0; i<n; i++) {
			co += (int) a[i] / mid;
		}
		if (co >= k) {			//Cut rope beshi hole co komanor chinta
			l = mid;
		}else {					//baranor chinta. that means C len kombe
			r = mid;
		}
	}

	cout << setprecision(10)<< l << '\n';

	return 0;
}