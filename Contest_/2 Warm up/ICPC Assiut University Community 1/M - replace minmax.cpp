#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, mn = 1e5, mx = -1e5, mi = 0,mj = 0;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if (arr[i] > mx) {
			mx = arr[i];
			mj = i;
		}
		if (arr[i] < mn) {
			mn = arr[i];
			mi = i;
		}
	}
	arr[mi] = mx;
	arr[mj] = mn;
	for (int i:arr) {
		cout << i << ' ';
	}
	return 0;
}