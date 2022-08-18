#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n][n];

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	int l = 0, r = 0;
	for (int i=0, j=n-1; i<n, j>=0; i++, j--) {
		l += arr[i][i];
		r += arr[i][j];
	}

	cout << abs(l-r);
	return 0;
}