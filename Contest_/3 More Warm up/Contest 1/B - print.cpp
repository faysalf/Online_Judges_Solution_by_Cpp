#include <bits/stdc++.h>
using namespace std;

int print(int n) {
	for (int i=1; i<=n; i++) {
		cout << i;
		if (i!=n) {
			cout << ' ';
		}
	}
	return 0;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	print(n);
}