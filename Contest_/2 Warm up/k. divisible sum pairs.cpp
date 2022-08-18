#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k, count=0; cin >> n >> k;
	int arr[n];

	for (int i = 0; i<n; i++) {
		cin >> arr[i];
	}

	for (int i=0; i<n; i++) {
		for (int j = i+1; j<n; j++) {
			if ((arr[i]+arr[j]) % k == 0) count++;
		}
	}
	cout << count << '\n';

	return 0;
}