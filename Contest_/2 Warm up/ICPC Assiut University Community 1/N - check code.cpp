#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, count = 0; cin >> a>>b;
	string s; cin >> s;
	bool flag = false;

	if (s[a] != '-') flag = true;
	else {
		for (auto i:s) {
			int f = (int) i - 48;
			if (i == '-') {
				count++;
				if (count >= 2) {
					flag = true;
					break;
				}
			}

			else if ((f > 9) || (f < 0)) {
				flag = true;
				break;
			}
		}
	}
	if (flag) cout << "No\n";
	else cout << "Yes\n";

	return 0;
}