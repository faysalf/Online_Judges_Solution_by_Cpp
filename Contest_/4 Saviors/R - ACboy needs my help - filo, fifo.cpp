#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, k; cin >> t;
	while (t--) {
		int n; string s;
		cin >> n >> s;
		if (s=="FIFO") {
			queue <int> q;
			for (int i=0; i<n; i++) {
				string ss; cin >> ss;
				if (ss=="IN") {
					cin >> k;
					q.push(k);
				}
				else {
					if (q.empty()) cout << "None\n";
					else {
						cout << q.front() << '\n';
						q.pop();
					}
				}
			}
		}
		else {
			stack<int> st;
			for (int i=0; i<n; i++) {
				string ss; cin >> ss;
				if (ss == "IN") {
					cin >> k;
					st.push(k);
				}
				else {
					if (st.empty()) cout << "None\n";
					else {
						cout << st.top() << '\n';
						st.pop();
					}
				}
			}
		}
	}

	return 0;
}