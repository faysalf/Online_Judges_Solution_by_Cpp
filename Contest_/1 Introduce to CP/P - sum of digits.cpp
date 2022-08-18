#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string n; cin >> n;
	int count = 0;
	while (n.size() > 1) {
		int re = 0;
		for (int i=0; i<n.size(); i++) {
			re += n[i] - 48;
		}

		n = to_string(re);
		count++;
	}
	cout << count << '\n';

	return 0;
}