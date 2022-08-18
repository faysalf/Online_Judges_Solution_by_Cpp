#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n+1];

	for (int i=1; i<n; i++) {
		int r; cin >> r;
		arr[r] = 1;
	}
	for (int i=1; i<=n; i++) {
		if (arr[i] != 1) {
			cout << (i) << '\n';
		}	
	}
	return 0;
}