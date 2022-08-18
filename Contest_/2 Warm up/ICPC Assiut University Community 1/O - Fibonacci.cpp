#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	long long int temp = 0, fa = 0, se = 1;
	if (n==1) cout << fa << '\n';
	else if (n == 2) cout << se << '\n';
	else {
		for (int i=2; i<n; i++) {
			temp = fa + se;
			fa = se;
			se = temp;
		}
		cout << se << '\n';
	}

	return 0;
}