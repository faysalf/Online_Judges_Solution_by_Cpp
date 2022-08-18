#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	string s; cin >> s;
	int a = 0, d = 0;
	for (char i:s) {
		if (i == 'A') {
			a++;
		}
		else d++;
	}
	if (a > d) cout << "Anton\n";
	else if (a < d) cout << "Danik\n";
	else {
		cout << "Friendship\n";
	}

	return 0;
}