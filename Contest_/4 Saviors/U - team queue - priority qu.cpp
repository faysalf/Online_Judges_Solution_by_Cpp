#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	// vector<int>arr;
	int x = 1;
	while (cin >> t) {
		if (t==0) break;
		cout << "Scenario #" << x << '\n';
		x++;
		for (int i = 0; i<t; i++) {
			int n; cin >> n;
			while (n--) {
				int r; cin >> r;
				// arr.push_back(r);
			}
		}
		priority_queue<int>pq;
		string s;
		while (cin >> s && s!="STOP") {
			if (s == "ENQUEUE") {
				int fs; cin >> fs;
				pq.push(-fs);
			}
			else if (s=="DEQUEUE") {
				cout << -(pq.top()) << '\n';
				pq.pop();
			}
		}
	}
	return 0;
}