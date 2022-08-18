#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, sum = 0; cin >> n;
	string s; cin >> s;
	for (int i=0; i<n; i++) {
		int ch = s[i] - 48;
		sum += ch;
	}
	cout << sum << '\n';

	return 0;
}