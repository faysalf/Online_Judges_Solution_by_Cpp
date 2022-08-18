#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	int ind = 0, data = 1e5;

	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if (arr[i] < data) {
			ind = i;
			data = arr[i];
		}
	}
	cout << data << ' ' << ind+1 << '\n';

	return 0;
}