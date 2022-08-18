#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];
	long long int sum = 0;
	for (auto &i:arr) {
		cin >> i;
		sum += i;
	}
	if ((sum&1) == 0) {
		cout << sum << '\n';
	}
	else {
		int flag = 1e9;
		for (int i:arr) {
			if (flag > i && (i&1)==1) flag = i;
		}
		cout << (sum - flag) << '\n';
	}

	return 0;
}