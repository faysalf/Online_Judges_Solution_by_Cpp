#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, pos_sz = 0, neg_sz = 0; cin >> t;
	vector<int> pos, neg;
	map<int, int> all;
	while (t--) {
		int x, y; cin >> x >> y;
		all[x] = y;
		if (x < 0) {
			neg.push_back(x);
			neg_sz++;
		}
		else {
			pos.push_back(x);
			pos_sz++;
		}
	}
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end(), greater<int>()); //use rbegin(), rend() too

	long long count = 0;
	int mn_sz = min(pos_sz, neg_sz);

	for (int i=0; i<mn_sz; i++) {
		count += (all[pos[i]] + all[neg[i]]);
	}
	if (pos_sz > neg_sz) count += all[pos[neg_sz]];
	else if (pos_sz < neg_sz) count += all[neg[pos_sz]];

	cout << count << '\n';

	return 0;
}