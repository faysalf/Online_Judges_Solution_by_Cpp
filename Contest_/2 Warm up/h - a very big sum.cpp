#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	long long int sum = 0;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << '\n';

	return 0;
}