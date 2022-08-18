#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	for (auto &i:arr) {
		cin >> i;
	}
	for (int i=n-1; i>=0; i--) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return 0;
}