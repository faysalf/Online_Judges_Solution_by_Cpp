#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n; cin >> t >> n;

	queue<int> pl1;
	queue<int> pl2;
	for (int i=0; i<n; i++) {
		int r; cin>>r;
		pl1.push(r);
	}
	int m; cin >> m;
	for (int i=0; i<m; i++) {
		int r; cin >> r;
		pl2.push(r);
	}
	int fight = 0;
	while (!pl1.empty() && !pl2.empty() && fight<1e3) {
		int x = pl1.front();
		int y = pl2.front();
		pl1.pop(); pl2.pop();

		if (x>y) {
			pl1.push(y);
			pl1.push(x);
		}else {
			pl2.push(x);
			pl2.push(y);
		}
		fight++;
	}
	if (fight == 1e3) cout << -1 << "\n";
	else {
		cout << fight << ' ';
		if (pl1.empty()) cout << 2 << '\n';
		else cout << 1 << '\n';
	}
	return 0;
}