#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		vector<int> arr(m);
		for (auto &i:arr) {
			cin >> i;
		}
		vector <int> res;
		deque <int> dq;
		for (int i=0; i<n; i++) {
			if (!dq.empty() && dq.front() == i-n) dq.pop_front();

			while (!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
			dq.push_back(i);
			if (i >= n-1) res.push_back(arr[dq.front()]);
		}
		for (auto i:res) cout << i << ' ';
		cout << '\n';
	}

	return 0;
}