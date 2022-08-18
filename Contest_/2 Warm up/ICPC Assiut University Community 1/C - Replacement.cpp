#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	for (auto &i:arr) {
		cin >> i;
		if (i < 0) cout << 2 << ' ';
		else if (i>0) cout << 1 << ' ';
		else cout << 0 << ' ';
	}
	cout << '\n';
	return 0;
}