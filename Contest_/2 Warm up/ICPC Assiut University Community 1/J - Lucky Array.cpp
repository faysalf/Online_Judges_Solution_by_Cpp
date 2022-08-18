#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0, min = 1e6; cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];

			if (arr[i] < min) {
				min = arr[i];
				count = 1;
			}
			else if (arr[i] == min) {
				count++;
			}
	}
	if ((count&1)==1) cout << "Lucky\n";
	else cout << "Unlucky\n";

	return 0;
}