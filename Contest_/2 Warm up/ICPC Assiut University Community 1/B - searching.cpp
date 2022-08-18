#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int x; cin >> x;

	int index = distance(arr, find(arr, arr+n,x));
	if (index < n) cout << index << '\n';
	else cout << "-1" << '\n';
	return 0;
}