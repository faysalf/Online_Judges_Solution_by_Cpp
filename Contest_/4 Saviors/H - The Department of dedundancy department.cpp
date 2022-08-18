#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map<int, int> mp;

	vector<int> vec;
	int x;
	while (cin>>x) {
		mp[x]++;

		if (mp[x] == 1) {
			vec.push_back(x);
		}
	}
	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << ' ' << mp[*it] << '\n';
	}

	return 0;
}