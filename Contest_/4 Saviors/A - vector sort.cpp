#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector <int> vec;

	int n; cin >> n;
	for (int i=0; i<n; i++) {
		int j; cin >> j;
		vec.push_back(j);
	}
	sort(vec.begin(), vec.end());
	for (auto i:vec) {
		cout << i;
		if (i != *(vec.end()-1)) cout << ' ';
	}
	cout << '\n';
	return 0;
}