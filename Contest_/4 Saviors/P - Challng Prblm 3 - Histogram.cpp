//https://vjudge.net/contest/470780#rank	- P

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, mx = 0;
	while (cin >> n) {
		if (n == 0) break;
		dequeue<int> q;
		mn = 1e9
		for (int i=0; i<n; i++) {
			cerr << mx << '\n';
			int r; cin >> r;
			if (mn > r) mn = r;
			q.push_back(r);
			// if (!q.empty() && min({q}) * q.size() > mx) mx = min({q}) * q.size();

			while (!q.empty()) {
				if (min({q}) * q.size() > mx) mx =  * q.size();
				q.pop_front();
			}

			
			// if (!q.empty() && (min(q.front(),r) * 2) > mx) {
			// 	mx = (min(q.front(),r) * 2);

			// 	q.push_back(r);
			// 	q.pop_back();
			// }
			// else {
			// 	if (r>mx) mx = r;
			// 	if (q.empty()) {
			// 		q.push_back(r);
			// 	}
			// 	else {
			// 		q.pop_back();
			// 		q.push_back(r);
			// 	}
			// }
		}
		cout << mx << '\n';
	}
	return 0;
}