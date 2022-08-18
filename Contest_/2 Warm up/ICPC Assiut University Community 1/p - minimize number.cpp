#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0; cin >> n;
	int arr[n];
	bool flag = true;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		if ((arr[i]&1)==1) flag = false;
		else arr[i] /= 2;
	}
	//if (flag) count++;

	while (flag) {
		count++;
		for (int i=0; i<n; i++) {
			if ((arr[i]&1)==1) flag = false;
			else arr[i] /= 2;
		}
	}
	cout << count << '\n';

	return 0;
}