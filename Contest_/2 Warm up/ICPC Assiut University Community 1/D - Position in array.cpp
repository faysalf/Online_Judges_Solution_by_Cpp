#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if (arr[i] <= 10) {
			cout << "A["<<i<<"] = "<<arr[i] << '\n';
		}
	}
	return 0;
}