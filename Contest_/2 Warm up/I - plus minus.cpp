#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	int pos = 0, neg = 0, zer = 0;
	for (int i= 0; i<n; i++) {
		cin >> arr[i];
		if (arr[i] > 0) pos++;
		else if (arr[i] < 0) neg++;
		else zer++;
	}
	cout << fixed << setprecision(6) << (double) pos/n << '\n';
	cout << fixed << setprecision(6) << (double) neg/n << '\n';
	cout << fixed << setprecision(6) << (double) zer/n << '\n';
	return 0;
}