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
	bool flag = false;
	for (int i=0, j=n-1; i<n/2, j>n/2; i++,j--) {
		if (arr[i] != arr[j]) flag = true;
	}
	if ((n&1) == 0 && arr[n/2 -1] != arr[n/2]) flag = true;

	if (flag) cout << "NO\n";
	else cout << "YES\n";

	return 0;
}