#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	int d = c;

	int res = -1;
	while (c <= b) {
		if (c >= a) {
			res = c;
			break;
		}
		else {
			c += d;
		}
	}
	cout << res << '\n';

	return 0;
}