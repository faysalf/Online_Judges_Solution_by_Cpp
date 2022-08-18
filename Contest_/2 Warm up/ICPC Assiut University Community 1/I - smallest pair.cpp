#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, sum=1e6; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
		for (int k = 0; k<n; k++) {
			cin >> arr[k];
		}
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				sum = min(sum,arr[i]+arr[j]+j-i);
			}
		}

		cout << sum << '\n';
	}
	return 0;
}