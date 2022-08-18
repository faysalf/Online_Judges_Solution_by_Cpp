#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
		for (auto &i:arr) {
			cin >> i;
		}
		for (int i=0; i<n; i++) {
			cout << arr[i] << ' ';
			int mx = arr[i];
			for (int j=i+1; j<n; j++) {
				if (arr[j] > mx) {
					cout << arr[j] << ' ';
					mx = arr[j];
				}else {
					cout << mx << ' ';
				}
			}
		}
		cout << '\n';
	}

	return 0;
}